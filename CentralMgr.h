#pragma once
#include "QSingleApplication.h"
#include "NetworkMgr.h"
#include "UIMgr.h"

class CentralMgr : public QSingleApplication
{
	Q_OBJECT
public:
	CentralMgr(int &argc, char **argv);
	~CentralMgr();

	bool init();

protected:
	/*UI模块*/
	void initUI();
	/*网络模块*/
	void initNetwork();
	/*多线程任务模块*/
	void initThreadTask();

	/*最后初始化*/
	void onAfterInit();
private:

	NetworkMgr network_mgr_;
	UIMgr ui_mgr_;
};

