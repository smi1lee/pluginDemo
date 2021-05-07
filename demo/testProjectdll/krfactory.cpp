#include "krfactory.h"
#include "Centraldll_global.h"
#include "titledll_global.h"
#include <QLibrary>

TitleWidget *KRFactory::createTitleWidget(QWidget* parent)
{
    TitleWidget* titleWidget = nullptr;
    QLibrary library("titledll.dll");
    if(library.load())
    {
        typedef TitleWidget*(*getTitleObj)();
        getTitleObj pGetObj = (getTitleObj)library.resolve("CreateTitleWidget");
        qDebug() << library.errorString();
        if (pGetObj)
        {
            titleWidget = pGetObj();
            titleWidget->show();
        }        
    }
    else
    {
        qDebug() << "load fail";
    }
    return titleWidget;
}

CentralWidget *KRFactory::createCentralWidget(QWidget* parent)
{
    CentralWidget* centralWidget = nullptr;
    QLibrary library("Centraldll.dll");
    if(library.load())
    {
        typedef CentralWidget*(*getCentralObj)();
        getCentralObj pGetObj = (getCentralObj)library.resolve("CreateCentralWidget");
        qDebug() << library.errorString();
        if (pGetObj)
        {
            centralWidget = pGetObj();
            centralWidget->show();
        }        
    }
    else
    {
        qDebug() << "load fail";
    }
    return centralWidget;
}

BottomWidget *KRFactory::createBottomWidget(QWidget* parent)
{
//    return new KRBottom(parent);
    return nullptr;
}
