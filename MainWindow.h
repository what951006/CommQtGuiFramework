#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

protected:
	//创建窗口等等，放于MainWindow的构造函数中
	//void create...Window();

	/*创建脚本窗口*/
	void createScriptWindow();

private:
	Ui::MainWindowClass ui;
};
