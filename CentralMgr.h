#pragma once
#include "QSingleApplication.h"
#include "NetworkMgr.h"
#include "UIMgr.h"
#include "DataMgr.h"

class CentralMgr : public QSingleApplication
{
	Q_OBJECT
public:
	CentralMgr(int &argc, char **argv);
	~CentralMgr();

	bool init();

protected:
	/*UI模块*/
	void initUIMgr();
	/*网络模块*/
	void initNetworkMgr();
	/*多线程任务模块*/
	void initThreadTaskMgr();
	/*初始化程序数据模块*/
	void initAppDataMgr();
	/*最后初始化*/
	void onAfterInit();
private:

	NetworkMgr network_mgr_;
	UIMgr ui_mgr_;
	DataMgr data_mgr_;
};

