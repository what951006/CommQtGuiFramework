#pragma once

#include <QObject>

/************************************************************************/
/* @brief:����ģ�飬http�����������ӿڼ���
/************************************************************************/

class NetworkMgr : public QObject
{
	Q_OBJECT

public:
	NetworkMgr(QObject *parent);
	~NetworkMgr();

signals:
	
private:

};
