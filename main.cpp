#include "CentralMgr.h"

int main(int argc, char *argv[])
{
	CentralMgr a(argc, argv);
	if (a.init())
	{
		return a.exec();
	}
	return -1;
}
