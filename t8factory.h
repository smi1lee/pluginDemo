#ifndef T8FACTORY_H
#define T8FACTORY_H

#include "widgetfactory.h"

class T8Factory : public WidgetFactory
{
public:
    TitleWidget * createTitleWidget(QWidget* parent = nullptr) override;
    CentralWidget * createCentralWidget(QWidget* parent = nullptr) override;
    BottomWidget * createBottomWidget(QWidget* parent = nullptr) override;
};

#endif // T8FACTORY_H
