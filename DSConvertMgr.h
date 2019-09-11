#pragma once
#include <QObject>
#include "CommStruct.h"
/************************************************************************/
/* @brief:数据结构转换类        
/************************************************************************/

class DSConvertMgr : public QObject
{

public:
	CommST::TestStruct toTestStruct(const QByteArray & data);
protected:
	DSConvertMgr(QObject *);
	~DSConvertMgr();
};

