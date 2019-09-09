#pragma once

#include <QObject>

/************************************************************************/
/* @brief:网络模块，http相关网络请求接口集合
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
