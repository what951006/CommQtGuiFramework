#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

protected:
	//�������ڵȵȣ�����MainWindow�Ĺ��캯����
	//void create...Window();

	/*�����ű�����*/
	void createScriptWindow();

private:
	Ui::MainWindowClass ui;
};
