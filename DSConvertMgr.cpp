#include "DSConvertMgr.h"



CommST::TestStruct DSConvertMgr::toTestStruct(const QByteArray & data)
{
	CommST::TestStruct st;
	//解析json 或者 其它数据格式到TestStruct，其它方法可以按此方法扩展

	return st;

}

DSConvertMgr::DSConvertMgr(QObject *obj)
	:QObject(obj)
{
}


DSConvertMgr::~DSConvertMgr()
{
}
