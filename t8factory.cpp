#include "t8factory.h"
#include "t8title.h"
#include "t8central.h"
#include "t8bottom.h"

TitleWidget *T8Factory::createTitleWidget(QWidget* parent)
{
    return new T8Title(parent);
}

CentralWidget *T8Factory::createCentralWidget(QWidget* parent)
{
    return new T8Central(parent);
}

BottomWidget *T8Factory::createBottomWidget(QWidget* parent)
{
    return new T8bottom(parent);
}
