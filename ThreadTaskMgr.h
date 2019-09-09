#pragma once

#include <QObject>
#include <QThread>
#include <QThreadPool>
#include <QRunnable>
#include <functional>
enum TASK_ID
{
	TASK_NULL = 0,
};


class ThreadTaskMgr : public QObject
{
	Q_OBJECT
public:
	ThreadTaskMgr(QObject *parent);
	~ThreadTaskMgr();


	void runTask(std::function<void()> func = nullptr, TASK_ID task_id = TASK_NULL);

signals:

	void sigTaskFinished(TASK_ID task_id);

private:
	QThreadPool thread_pool_;
};
