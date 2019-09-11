#include "CommDockWidget.h"

#include <QPainter>

CommDockWidget::CommDockWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

CommDockWidget::~CommDockWidget()
{
}

QWidget * CommDockWidget::getCentralWidget()
{
	return ui.central_widget;
}

void CommDockWidget::setTitle(const QString & title)
{
	ui.lab_title->setText(title);
}

void CommDockWidget::paintEvent(QPaintEvent *event)
{
	QPainter p(this);
	p.fillRect(0,0,width(),28,QColor(80,80,80));
}
