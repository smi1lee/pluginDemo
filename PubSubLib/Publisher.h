#pragma once

# if defined(PUBSUBLIB_LIB)
#  define PUBSUBLIB_EXPORT Q_DECL_EXPORT
# else
#  define PUBSUBLIB_EXPORT Q_DECL_IMPORT
# endif

#include <QObject>
#include "Subscriber.h"

class PUBSUBLIB_EXPORT Publisher : public QObject
{
    Q_OBJECT

public:
    Publisher();
    ~Publisher();

public:
    static Publisher* getInstance() {
        static Publisher m_instance;
        return &m_instance;
    }

    static void AddSubscriber(int iType, SubInterface*);

    static void RemoveSubscriber(int iType, SubInterface*);

    static void PublishEvent(int iType, Qt::ConnectionType connectType = Qt::AutoConnection);

    static void PublishEvent(int iType, const QVariant& variant, Qt::ConnectionType connectType = Qt::AutoConnection);

    static void PublishEvent(int iType, const QVariant& variant1, const QVariant& variant2, Qt::ConnectionType connectType = Qt::AutoConnection);

    static void PublishEvent(int iType, const QVariant& variant1, const QVariant& variant2, const QVariant& variant3, Qt::ConnectionType connectType = Qt::AutoConnection);

private:
    SubscribeMng* m_subMng;

};
