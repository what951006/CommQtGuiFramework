#include "ThreadTaskMgr.h"


#include <QDebug>

class DerRunnable :public QRunnable
{
public:
	

	virtual void run() override
	{
		qDebug() << ""<<QThread::currentThreadId();

		if (func_)
			func_();
	}

	std::function<void ()> func_ = nullptr;
	TASK_ID task_id_ = TASK_NULL;
};




ThreadTaskMgr::ThreadTaskMgr(QObject *parent)
	: QObject(parent)
{
}

ThreadTaskMgr::~ThreadTaskMgr()
{
	thread_pool_.waitForDone();
}

void ThreadTaskMgr::runTask(std::function<void()> func /*= nullptr*/, TASK_ID task_id /*= TASK_NULL*/)
{
	DerRunnable *run = new DerRunnable;
	run->func_ = func;
	run->task_id_ = task_id;
	thread_pool_.start(run);
}

