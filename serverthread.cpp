#include "serverthread.h"

ServerThread::ServerThread()
{
    qDebug() << "ServerThread created";
}

void ServerThread::run() {
    qDebug() << "ServerThread is running...";

    bool connection;
    connection = checkConnection();

    qDebug() << connection;
}

bool ServerThread::isConnected() {
    //No logic now
    return false;
}

bool ServerThread::checkConnection() {

    bool retVal = false;

    QNetworkAccessManager nam;
    QNetworkRequest req(QUrl("http://www.google.com"));
    QNetworkReply* reply = nam.get(req);
    QEventLoop loop;
    QTimer timeoutTimer;

    QObject::connect(&timeoutTimer, SIGNAL(timeout()), &loop, SLOT(quit()));
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));

    timeoutTimer.setSingleShot(true);
    timeoutTimer.start(3000);

    loop.exec();

    if (reply->bytesAvailable())
    {
        retVal = true;
    }

    return retVal;
}
