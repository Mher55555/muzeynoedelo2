#ifndef SERVERTHREAD_H
#define SERVERTHREAD_H

#include <QThread>
#include <QtNetwork/QNetworkAccessManager>
#include <QEventLoop>
#include <QTimer>
#include <QObject>
#include <QtNetwork/QNetworkReply>
#include <QDebug>

class ServerThread : QThread
{
public:
    ServerThread();
    ~ServerThread() {
        qDebug() << "ServerThread is destroyed";
    };

    //Void fun
    void run();

    //Bool fun
    bool isConnected();
    bool checkConnection();

private:
    //Nothing
};

#endif // SERVERTHREAD_H
