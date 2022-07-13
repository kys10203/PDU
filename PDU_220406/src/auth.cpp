#include "auth.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <iostream>

using std::string;
/*
코드값	설명
1	암호 불일치
2	암호 9글자 미만
3	암호에 아이디 사용
10	숫자 미포함
20	문자 미포함
30	특수문자 미포함
1000	같은 문자 3연속 사용
2000	연속 문자 3연속 사용
 */

CAuth::CAuth(){
	m_strAdminGroupName = "USER/ADMIN";
	m_strOperatorGroupName = "USER/OPERATOR";
}

CAuth::~CAuth(){
}

INT32 CAuth::AddUser(const std::string & strUserId, const std::string & strPwd, const U_INT32 auth){
	INT32 nRet = -1;
	struct stat st = {0};
	string nameStr;

	if(auth == 1U){
		nameStr = m_strAdminGroupName + "/" + strUserId;
	}else {
		nameStr = m_strOperatorGroupName + "/" + strUserId;
	}

	if(stat(nameStr.c_str(), &st) == -1){
		FILE *fp = NULL;
		fp = fopen(nameStr.c_str(), "w+");
		if(fp != NULL){

			//string pwd = sif::CEncrypt::Encrypt(strPwd);
			(void)fwrite(strPwd.c_str(), strPwd.length(), 1, fp);
			nRet = 0;
		}else{
			nRet = -1;
		}
		(void)fclose(fp);
	}else{
		// 해당 유저가 이미 존재함
		nRet = -1;
	}

	return nRet;
}


INT32 CAuth::DelUser(const std::string & strUserId, const U_INT32 auth) const
{
	INT32 nRet = -1;
	struct stat st = {0};
	string nameStr;

	if(auth == 1U){
		nameStr = m_strAdminGroupName + "/" + strUserId;
	}else{
		nameStr = m_strOperatorGroupName + "/" + strUserId;
	}

	if(stat(nameStr.c_str(), &st) == -1){
		// 해당 유저가 존재하지 않음
		nRet = -1;
	}else{
		nRet = remove(nameStr.c_str());
	}

	return nRet;
}

bool CAuth::Authenticate(const std::string & strUserId, const std::string & strPwd, const U_INT32 auth) const
{
	bool bRet = false;

	struct stat st = {0};
	string nameStr;

	if(auth == 1U){
		nameStr = m_strAdminGroupName + "/" + strUserId;
	}else{
		nameStr = m_strOperatorGroupName + "/" + strUserId;
	}

	if(stat(nameStr.c_str(), &st) == -1){
		// 해당 유저가 존재하지 않음
		bRet = false;
	}else{
		// 암호화된 암호길이는 최대 256
		FILE * fp = NULL;
		CHAR pwd[256];
		for(INT32 i = 0; i<256; i++){
			pwd[i] = 0;
		}

		fp = fopen(nameStr.c_str(), "r");
		if(fp != NULL){
			string encpwd = strPwd+'\n';
			(void)fread(pwd, sizeof(pwd), 1, fp);
			//encpwd = sif::CEncrypt::Encrypt(strPwd);
			if(encpwd == pwd){
				bRet = true;
			}else{
				bRet = false;
			}
		}else{
			bRet = false;
		}
		(void)fclose(fp);
	}

	return bRet;
}

bool CAuth::ChangePasswd( const std::string & strPreUserId, const std::string & strUserId, const std::string & strNewPwd, const U_INT32 preAuth, const U_INT32 auth){

	(void)DelUser(strPreUserId, preAuth);
	(void)AddUser(strUserId, strNewPwd, auth);

	return true;
}

INT32 CAuth::CheckSerialize(const CHAR ch1, const CHAR ch2,const CHAR ch3) const
{
	INT32 ret = 0;
	INT32 diff1 = 0, diff2 = 0;

	diff1 = static_cast<INT32>((static_cast<INT32>(ch2) - static_cast<INT32>(ch1)));
	diff2 = static_cast<INT32>((static_cast<INT32>(ch3) - static_cast<INT32>(ch2)));
	printf("diff1 = %d, diff2 = %d\n", diff1, diff2);

	if((diff1 == 0) && (diff2 == 0)){

		// 동일 문자 3회
		ret = 1000;
	}else{
		if((diff1 == 1) && (diff2 == 1)){
			// 오름차순 연속
			ret = 2000;
		}
		if((diff1 == -1) && (diff2 == -1)){
			// 내림차순 연속
			ret = 2000;
		}
	}

	return ret;
}

bool CAuth::CheckNum(const CHAR ch) const{
	bool ret = false;
	// 숫자
	if((ch >= static_cast<CHAR>(0x30)) && (ch <= static_cast<CHAR>(0x39))){
		ret = true;
	}

	return ret;
}

bool CAuth::CheckRegChar(const CHAR ch) const{
	bool ret = false;
	// 소문자
	if((ch >= static_cast<CHAR>(0x61)) && (ch <= static_cast<CHAR>(0x7a))){
		ret = true;
	}

	return ret;
}

bool CAuth::CheckSpChar(const CHAR ch) const{
	bool ret = false;

	// 특수문자 1
	if((ch >= static_cast<CHAR>(0x20)) && (ch <= static_cast<CHAR>(0x2f))){
		ret = true;
	}

	// 특수문자 2
	if((ch >= static_cast<CHAR>(0x3a)) && (ch <= static_cast<CHAR>(0x40))){
		ret = true;
	}
	return ret;
}

INT32 CAuth::CheckPassword(const std::string id, std::string pwd, const std::string pwd2){
	INT32 ret = 0;
	string bak = pwd;

	// 패스워드 비교
	if(pwd != pwd2){
		ret = 1;
	}else{
		if(pwd.length() < 9)	{

			ret = 2;
		}else{
			bool beno = false, bereg = false, besp = false;

			// 아이디와 패스워드가 다른 지 확인
			if(pwd.find(id) != std::string::npos)	{

				ret = 3;
			}else{
				CHAR ch1 = -1;
				CHAR ch2 = -1;
				CHAR ch3 = -1;
				for(U_INT32 i = 0U; i < pwd.size(); i++){
					ch1 = ch2;
					ch2 = ch3;
					ch3 = bak.front();
					bak.erase(0,1);

					if(CheckNum(ch3) == true){
						beno = true;
					}

					if(CheckRegChar(ch3) == true){
						bereg = true;
					}

					if(CheckSpChar(ch3) == true){
						besp = true;
					}

					ret = CheckSerialize(ch1, ch2, ch3);
					if(ret != 0){
						break;
					}
				} // for
			}

			if(ret == 0)	{
				if(beno == false)	{
					ret = 10;
				}

				if(bereg == false){
					ret = 20;
				}

				if(besp == false)	{
					ret = 30;
				}
			}
		}
	}

	return ret;
}
