/*
 * auth.h
 *
 *  Created on: 2022. 3. 15.
 *      Author: suhwan
 */

#ifndef AUTH_H_
#define AUTH_H_

#include <string>
#include "defList.h"

class CAuth
{
public:
	CAuth();
	~CAuth();

public:
	std::string m_strAdminGroupName;	// 그룸이름의 디렉토리
	std::string m_strOperatorGroupName;	// 그룸이름의 디렉토리
	std::string m_strUserId;		// 아이디 이름의 파일
	std::string m_strPwd;		// 암호는 아이디 파일 내용

public:
	INT32 AddUser(const std::string & strUserId, const std::string & strPwd, const U_INT32 auth);
	INT32 DelUser(const std::string & strUserId , const U_INT32 auth) const;
	bool Authenticate(const std::string & strUserId, const std::string & strPwd , const U_INT32 auth) const;
	bool ChangePasswd(const std::string & strPreUserId, const std::string & strUserId, const std::string & strNewPwd , const U_INT32 preAuth, const U_INT32 auth);
	INT32 CheckPassword(const std::string id, std::string pwd, const std::string pwd2);

public:
	INT32 CheckSerialize(const CHAR ch1,const CHAR ch2, const CHAR ch3) const;
	bool CheckNum(const CHAR ch) const;
	bool CheckRegChar(const CHAR ch) const;
	bool CheckSpChar(const CHAR ch) const;
};



#endif /* AUTH_H_ */
