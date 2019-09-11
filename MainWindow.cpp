#include "MainWindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "CommDockWidget.h"


MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	createScriptWindow();
}

void MainWindow::createScriptWindow()
{	
	QHBoxLayout * hlyout = new QHBoxLayout(this);

	QVBoxLayout * vlyout1 = new QVBoxLayout(this);
	CommDockWidget * dock_widget = new CommDockWidget;
	dock_widget->setTitle("");
	vlyout1->addWidget(dock_widget);
	CommDockWidget * dock_widget2 = new CommDockWidget;
	dock_widget2->setTitle(u8"����̨");
	vlyout1->addWidget(dock_widget2);
	CommDockWidget * dock_widget3 = new CommDockWidget;
	dock_widget3->setTitle(u8"��Ϣ");
	vlyout1->addWidget(dock_widget3);


	CommDockWidget * center_widget = new CommDockWidget;
	center_widget->setTitle(u8"�ļ��༭��");

	QVBoxLayout * vlyout2 = new QVBoxLayout(this);

	CommDockWidget * dock_widget_4 = new CommDockWidget;
	dock_widget_4->setTitle(u8"ָ��ί�е�");
	vlyout2->addWidget(dock_widget_4);
	CommDockWidget * dock_widget_5 = new CommDockWidget;
	dock_widget_5->setTitle(u8"�ҵ����ʲ�");
	vlyout2->addWidget(dock_widget_5);

	hlyout->addLayout(vlyout1);
	hlyout->addWidget(center_widget);
	hlyout->addLayout(vlyout2);

	ui.tab_script->setLayout(hlyout);
}
