#include "krfactory.h"
#include "krtitle.h"
#include "krcentral.h"
#include "krbottom.h"


TitleWidget *KRFactory::createTitleWidget(QWidget* parent)
{
    return new KRTitle(parent);
}

CentralWidget *KRFactory::createCentralWidget(QWidget* parent)
{
    return new KRCentral(parent);
}

BottomWidget *KRFactory::createBottomWidget(QWidget* parent)
{
    return new KRBottom(parent);
}
