#pragma once

#include <QObject>

class DataMgr : public QObject
{
	Q_OBJECT

public:
	DataMgr(QObject *parent);
	~DataMgr();
};
