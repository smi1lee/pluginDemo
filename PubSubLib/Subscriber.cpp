#include "Subscriber.h"
#include <QDebug>

void SubscribeMng::insertSub(int iType, SubInterface* subscriber)
{
    m_subHash.insert(iType, subscriber);
}

void SubscribeMng::removeSub(int iType, SubInterface* subscriber)
{
    if (m_subHash.contains(iType))
    {
        m_subHash.remove(iType, subscriber);
    }
}

void SubscribeMng::ReceiveEvent(int iType)
{
    if (m_subHash.contains(iType))
    {
        auto subscribers = m_subHash.values(iType);
        for (auto subscriber : subscribers) 
        {
            subscriber->ReceiveEvent(iType);
        }
    }
}

void SubscribeMng::ReceiveOneEvent(int iType, const QVariant& variant)
{
    if (m_subHash.contains(iType))
    {
        auto subscribers = m_subHash.values(iType);
        for (auto subscriber : subscribers)
        {
            subscriber->ReceiveEvent(iType, variant);
        }
    }
}

void SubscribeMng::ReceiveTwoEvent(int iType, const QVariant& variant, const QVariant& variant1)
{
    if (m_subHash.contains(iType))
    {
        auto subscribers = m_subHash.values(iType);
        for (auto subscriber : subscribers)
        {
            subscriber->ReceiveEvent(iType, variant, variant1);
        }
    }
}

void SubscribeMng::ReceiveThreeEvent(int iType, const QVariant& variant, const QVariant& variant1, const QVariant& variant2)
{
    if (m_subHash.contains(iType))
    {
        auto subscribers = m_subHash.values(iType);
        for (auto subscriber : subscribers)
        {
            subscriber->ReceiveEvent(iType, variant, variant1, variant2);
        }
    }
}
