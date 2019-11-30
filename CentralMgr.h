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
	/*UIģ��*/
	void initUIMgr();
	/*����ģ��*/
	void initNetworkMgr();
	/*���߳�����ģ��*/
	void initThreadTaskMgr();
	/*��ʼ����������ģ��*/
	void initAppDataMgr();
	/*����ʼ��*/
	void onAfterInit();
private:

	NetworkMgr network_mgr_;
	UIMgr ui_mgr_;
	DataMgr data_mgr_;
};

