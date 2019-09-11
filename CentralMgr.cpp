#include "CentralMgr.h"



CentralMgr::CentralMgr(int &argc, char **argv)
	:QSingleApplication(argc,argv)
	,network_mgr_(this)
	,ui_mgr_(this)
	,data_mgr_(this)
{
}


CentralMgr::~CentralMgr()
{
}

bool CentralMgr::init()
{
	/*�����ģ���ʼ��*/
	StartSingleton();
	if (IsRunning())
	{
		return false;
	}

	initUIMgr();
	initNetworkMgr();
	initThreadTaskMgr();
	initAppDataMgr();
	onAfterInit();
	return true;
}

void CentralMgr::initUIMgr()
{
	ui_mgr_.init();

	setActiveWindow(ui_mgr_.getMainWindow());
}

void CentralMgr::initNetworkMgr()
{

}

void CentralMgr::initThreadTaskMgr()
{

}

void CentralMgr::initAppDataMgr()
{

}

void CentralMgr::onAfterInit()
{
	/*�÷�����init�������ִ�еķ���
	  ����֮ǰ�������źŲۣ��ڸ÷�����
	  ִ��
	*/




}
