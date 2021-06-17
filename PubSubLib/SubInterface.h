#pragma once

#include <QVariant>
#include <QString>

class SubInterface
{
public:
    virtual ~SubInterface() = default;
    virtual void ReceiveEvent(int) { }
    virtual void ReceiveEvent(int , const QVariant& ) {}
    virtual void ReceiveEvent(int , const QVariant& , const QVariant& ) {}
    virtual void ReceiveEvent(int , const QVariant& , const QVariant& , const QVariant& ) {}
};

