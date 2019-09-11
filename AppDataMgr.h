#pragma once

#include <QObject>

class AppDataMgr : public QObject
{
	Q_OBJECT

public:
	AppDataMgr(QObject *parent);
	~AppDataMgr();
};
