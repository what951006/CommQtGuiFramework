#ifndef QSINGLEAPPLICATION_H
#define QSINGLEAPPLICATION_H
#include <QApplication>
#include <QLocalServer>
#include <QWidget>
#include <Windows.h>

class QSingleApplication : public QApplication
{
    Q_OBJECT
public:
    QSingleApplication(int &argc, char **argv);
	void SetNotifyData(const QByteArray& data);
    void StartSingleton();
    void StopSingleton();
    bool IsRunning();
	virtual void OnAnotherRun(const QByteArray& data);
	void setActiveWindow(QWidget*);

signals:
	void SigOnAnotherRun(const QByteArray& data);
private slots:
    // 有新连接时触发
    void _newLocalConnection();
protected:

    // 初始化本地连接
    void _initLocalConnection();
    // 创建服务端
    void _newLocalServer();
    // 激活窗口
    void _activateWindow();

    bool _isRunning;                // 是否已經有实例在运行
    QLocalServer *_localServer;     // 本地socket Server
    QString _serverName;            // 服务名称

	QByteArray notify_data_;
	QWidget *m_pWid = nullptr;
};

#endif // QSINGLEAPPLICATION_H
