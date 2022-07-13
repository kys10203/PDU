#ifndef THREAD_H
#define THREAD_H

#include <pthread.h>
#include "defList.h"

class CThread
{
public:
	CThread();
	~CThread();

public:
	pthread_t m_tThread;

public:
	INT32 Create(void *(*start_routine)(void *), void * arg);
};

class CMutex
{
public:
	CMutex();
	~CMutex();

public:
	pthread_mutex_t m_tMutex;
	bool m_bLocked;

public:
	INT32 Lock();
	INT32 Unlock();
};
#endif
