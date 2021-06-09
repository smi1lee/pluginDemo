#ifndef WIDGETFACTORY_H
#define WIDGETFACTORY_H

#include <QWidget>
#include <QEvent>
#include <QDebug>

#include "ComInterface.h"

class WidgetFactory
{
public:
    virtual TitleWidget* createTitleWidget(QWidget* parent = nullptr) = 0;
    virtual CentralWidget* createCentralWidget(QWidget* parent = nullptr) = 0;
    virtual BottomWidget* createBottomWidget(QWidget* parent = nullptr) =0;
};

#endif // WIDGETFACTORY_H
