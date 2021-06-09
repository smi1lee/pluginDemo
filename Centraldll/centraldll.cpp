#include "centraldll.h"
#include <QDebug>
#include <QEvent>

#include "Subscriber.h"

Centraldll::Centraldll(QWidget* parent)
{
    //CGlobalSubPub::RegisterEvent("type1", this, [&](QVariantList data) {
    //    qDebug() << data.at(0).toString();
    //});
    //CGlobalSubPub::RegisterEvent("type2", this, [&](QVariantList data) {
    //    qDebug() << "type2";
    //});
    //Publisher::AddSubscriber("type1", this);
    Publisher::AddSubscriber(111, this);
    Publisher::AddSubscriber(222, this);
}

Centraldll::~Centraldll()
{

}

void Centraldll::show()
{
    qDebug() << "show Centraldll";
}

void Centraldll::setParent(QWidget *parent)
{
    show();
    m_pParent = parent;
}

void Centraldll::ReceiveEvent(int iType)
{
    qDebug() << iType;
}

void Centraldll::ReceiveEvent(int iType, const QVariant& variant)
{
    qDebug() << iType << variant;
}

void Centraldll::ReceiveEvent(int iType, const QVariant& variant, const QVariant& variant1)
{
    qDebug() << iType << variant << variant1;
}

void Centraldll::ReceiveEvent(int iType, const QVariant& variant, const QVariant& variant1, const QVariant& variant2)
{
    qDebug() << iType << variant << variant1 << variant2;
}

bool Centraldll::event(QEvent* event)
{
    switch (event->type()) {
        qDebug() << "event 1";
    /*case testType::type2:
        m_pLabel->setText("receive event");
        break;*/
    }
    return QWidget::event(event);
}

CENTRALDLL_EXPORT CentralWidget* CreateCentralWidget()
{
    return new Centraldll;
}
