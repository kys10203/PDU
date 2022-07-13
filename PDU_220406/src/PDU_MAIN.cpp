#include "app.h"
#include "defList.h"
#include <iostream>

INT32 main(void){

	INT32 ret = 0;

	try{

		printf("**********\n");
		printf("**********START PDU_APP !!\n");
		printf("**********VER_0.0.1_220406\n\n");
		printf("**********\n");

		CApp app;

		if((app.Run()) == false){
			ret = -1;
		}else{
			ret = 0;
		}

	}catch(...){
		printf("exception\n");
	}


	return ret;
}


