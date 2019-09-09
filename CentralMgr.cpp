#include "CentralMgr.h"



CentralMgr::CentralMgr(int &argc, char **argv)
	:QSingleApplication(argc,argv)
	,network_mgr_(this)
	,ui_mgr_(this)
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

	initUI();
	
	initNetwork();

	initThreadTask();
	
	onAfterInit();
	return true;
}

void CentralMgr::initUI()
{
	ui_mgr_.init();

	setActiveWindow(ui_mgr_.getMainWindow());
}

void CentralMgr::initNetwork()
{

}

void CentralMgr::initThreadTask()
{

}

void CentralMgr::onAfterInit()
{
	/*�÷�����init�������ִ�еķ���
	  ����֮ǰ�������źŲۣ��ڸ÷�����
	  ִ��
	*/




}
