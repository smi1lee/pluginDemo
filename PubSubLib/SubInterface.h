#pragma once

#include <QVariant>
#include <QString>

class SubInterface
{
public:
    SubInterface() {}
    virtual ~SubInterface() {}
    virtual void ReceiveEvent(int iType) = 0;
    virtual void ReceiveEvent(int iType, const QVariant& variant) = 0;
    virtual void ReceiveEvent(int iType, const QVariant& variant, const QVariant& variant1) = 0;
    virtual void ReceiveEvent(int iType, const QVariant& variant, const QVariant& variant1, const QVariant& variant2) = 0;
};

