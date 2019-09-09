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
	/*UIģ��*/
	void initUI();
	/*����ģ��*/
	void initNetwork();
	/*���߳�����ģ��*/
	void initThreadTask();

	/*����ʼ��*/
	void onAfterInit();
private:

	NetworkMgr network_mgr_;
	UIMgr ui_mgr_;
};

