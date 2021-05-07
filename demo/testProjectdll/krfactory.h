#ifndef KRFACTORY_H
#define KRFACTORY_H

#include "widgetfactory.h"

class KRFactory : public WidgetFactory
{
public:
    TitleWidget * createTitleWidget(QWidget* parent = nullptr) override;
    CentralWidget * createCentralWidget(QWidget* parent = nullptr) override;
    BottomWidget * createBottomWidget(QWidget* parent = nullptr) override;
};

#endif // KRFACTORY_H
