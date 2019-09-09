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
	/*程序各模块初始化*/
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
	/*该方法是init方法最后执行的方法
	  程序之前建立的信号槽，在该方法后
	  执行
	*/




}
