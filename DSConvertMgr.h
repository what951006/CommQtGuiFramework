#pragma once
#include <QObject>
#include "CommStruct.h"
/************************************************************************/
/* @brief:���ݽṹת����        
/************************************************************************/

class DSConvertMgr : public QObject
{

public:
	CommST::TestStruct toTestStruct(const QByteArray & data);
protected:
	DSConvertMgr(QObject *);
	~DSConvertMgr();
};

