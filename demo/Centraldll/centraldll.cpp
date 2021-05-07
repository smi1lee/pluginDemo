#include "centraldll.h"
#include <QDebug>

Centraldll::Centraldll()
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

CENTRALDLL_EXPORT CentralWidget* CreateCentralWidget()
{
    return new Centraldll;
}
