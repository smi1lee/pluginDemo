#include "Publisher.h"
#include <QMetaObject>
#include <QDebug>

Publisher::Publisher()
{
    m_subMng = new SubscribeMng;
}

Publisher::~Publisher()
{
}

void Publisher::AddSubscriber(int iType, SubInterface* subscriber)
{
    getInstance()->m_subMng->insertSub(iType, subscriber);
}

void Publisher::RemoveSubscriber(int iType, SubInterface* subscriber)
{
    getInstance()->m_subMng->removeSub(iType, subscriber);
}

void Publisher::PublishEvent(int iType, Qt::ConnectionType connectType /*= Qt::AutoConnection*/)
{
    //qDebug() << SubscribeMng::getInstance();
    bool ret = QMetaObject::invokeMethod(getInstance()->m_subMng, "ReceiveEvent",
        connectType,
        Q_ARG(int, iType)
    );
    //qDebug() << iType << ret;
}

void Publisher::PublishEvent(int iType, const QVariant& variant, Qt::ConnectionType connectType /*= Qt::AutoConnection*/)
{
    bool ret = QMetaObject::invokeMethod(getInstance()->m_subMng, "ReceiveOneEvent",
        connectType,
        Q_ARG(int, iType),
        Q_ARG(QVariant, variant)
    );
    //qDebug() << iType << ret;

}

void Publisher::PublishEvent(int iType, const QVariant& variant1, const QVariant& variant2, Qt::ConnectionType connectType /*= Qt::AutoConnection*/)
{
        bool ret = QMetaObject::invokeMethod(getInstance()->m_subMng, "ReceiveTwoEvent",
            connectType,
            Q_ARG(int, iType),
            Q_ARG(QVariant, variant1),
            Q_ARG(QVariant, variant2)
        );
        //qDebug() << iType << ret;
}

void Publisher::PublishEvent(int iType, const QVariant& variant1, const QVariant& variant2, const QVariant& variant3, Qt::ConnectionType connectType /*= Qt::AutoConnection*/)
{
    bool ret = QMetaObject::invokeMethod(getInstance()->m_subMng, "ReceiveThreeEvent",
        connectType,
        Q_ARG(int, iType),
        Q_ARG(QVariant, variant1),
        Q_ARG(QVariant, variant2),
        Q_ARG(QVariant, variant3)
    );
    //qDebug() << iType << ret;
}
