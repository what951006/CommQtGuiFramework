#include "DSConvertMgr.h"



CommST::TestStruct DSConvertMgr::toTestStruct(const QByteArray & data)
{
	CommST::TestStruct st;
	//����json ���� �������ݸ�ʽ��TestStruct�������������԰��˷�����չ

	return st;

}

DSConvertMgr::DSConvertMgr(QObject *obj)
	:QObject(obj)
{
}


DSConvertMgr::~DSConvertMgr()
{
}
