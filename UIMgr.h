#pragma once

#include <QObject>
#include <memory>

#include "MainWindow.h"

class UIMgr : public QObject
{
	Q_OBJECT

public:
	UIMgr(QObject *parent);
	~UIMgr();

	void init();

	MainWindow* getMainWindow();

private:
	std::unique_ptr<MainWindow> main_window_;
};
