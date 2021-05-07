#ifndef WIDGETFACTORY_H
#define WIDGETFACTORY_H

#include <QWidget>
#include <QEvent>
#include <QDebug>

#include "ComInterface.h"

//enum testType
//{
//    type1 = QEvent::User + 1,
//    type2,
//    type3,
//    type4,
//    type5,
//    type6,
//    type7,
//    type8
//};



class WidgetFactory
{
public:
    virtual TitleWidget* createTitleWidget(QWidget* parent = nullptr) = 0;
    virtual CentralWidget* createCentralWidget(QWidget* parent = nullptr) = 0;
    virtual BottomWidget* createBottomWidget(QWidget* parent = nullptr) =0;
};

#endif // WIDGETFACTORY_H
