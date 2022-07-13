#include "thread.h"

CThread::CThread(){
	m_tThread = 0;
}

CThread::~CThread(){
}

INT32 CThread::Create(void *(*start_routine)(void *), void * arg){
	INT32 nRet = -1;
	nRet = pthread_create(&m_tThread, 0, start_routine, 0);
	pthread_detach(m_tThread); //0811
	return nRet;
}

CMutex::CMutex(){
	m_bLocked = false;
	pthread_mutex_init(&m_tMutex, 0);
}

CMutex::~CMutex(){
	if(m_bLocked == true){
		(void)Unlock();
	}
	pthread_mutex_destroy(&m_tMutex);
}

INT32 CMutex::Lock(){
	INT32 nRet = -1;
	nRet = pthread_mutex_lock(&m_tMutex);
	if(nRet == 0){
		m_bLocked = true;
	}
	return nRet;
}

INT32 CMutex::Unlock(){
	INT32 nRet = -1;
	nRet = pthread_mutex_unlock(&m_tMutex);
	if(nRet == 0){
		m_bLocked = false;
	}
	return nRet;
}

