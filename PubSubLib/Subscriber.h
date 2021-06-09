#pragma once

#include <QObject>
#include <QMultiHash>
#include "SubInterface.h"

class SubscribeMng : public QObject
{
    Q_OBJECT
public:
    explicit SubscribeMng(QObject* parent = nullptr) {};
    virtual ~SubscribeMng(){}

    void insertSub(int iType, SubInterface*);

    void removeSub(int iType, SubInterface*);

public slots:
    void ReceiveEvent(int iType);
    void ReceiveOneEvent(int iType, const QVariant& variant);
    void ReceiveTwoEvent(int iType, const QVariant& variant, const QVariant& variant1);
    void ReceiveThreeEvent(int iType, const QVariant& variant, const QVariant& variant1, const QVariant& variant2);

protected:
    QMultiHash<int, SubInterface*> m_subHash;
};
