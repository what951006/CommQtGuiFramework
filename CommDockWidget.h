#pragma once

#include <QWidget>
#include "ui_CommDockWidget.h"

class CommDockWidget : public QWidget
{
	Q_OBJECT

public:
	CommDockWidget(QWidget *parent = Q_NULLPTR);
	~CommDockWidget();

	QWidget * getCentralWidget();

	void setTitle(const QString & title);
protected:
	virtual void paintEvent(QPaintEvent *event) override;
private:
	Ui::CommDockWidget ui;
};
