#include "UIMgr.h"

UIMgr::UIMgr(QObject *parent)
	: QObject(parent)
{
}

UIMgr::~UIMgr()
{
}

void UIMgr::init()
{
	main_window_ = std::make_unique<MainWindow>();
	main_window_->setAttribute(Qt::WA_DeleteOnClose);
	QObject::connect(main_window_.get(), &QObject::destroyed, this, [&] {main_window_.release(); });
	main_window_->show();
}

MainWindow* UIMgr::getMainWindow()
{
	return main_window_.get();
}
