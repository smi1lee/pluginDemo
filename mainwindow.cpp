#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widgetfactory.h"
#include "t8title.h"
#include "t8central.h"
#include "t8bottom.h"
#include "krtitle.h"
#include "krbottom.h"
#include "krcentral.h"
#include "krfactory.h"
#include "t8factory.h"

#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    WidgetFactory *factory = new KRFactory();
    pKRTitle = factory->createTitleWidget(this);
    pKRCentral = factory->createCentralWidget(this);
    pKRBottom = factory->createBottomWidget(this);
    pKRTitle->show();
    pKRCentral->show();
    pKRBottom->show();

    QVBoxLayout *pLayout = new QVBoxLayout(ui->centralwidget);
    pLayout->addWidget(pKRTitle);
    pLayout->addWidget(pKRCentral);
    pLayout->addWidget(pKRBottom);

//    delete pKRTitle;
//    delete pKRCentral;
//    delete pKRBottom;

//    WidgetFactory *Tfactory = new T8Factory();
//    TitleWidget *pt8Title = Tfactory->createTitleWidget();
//    CentralWidget *pt8Central = Tfactory->createCentralWidget();
//    BottomWidget *pt8Bottom = Tfactory->createBottomWidget();
//    pt8Title->show();
//    pt8Central->show();
//    pt8Bottom->show();

//    delete pt8Title;
//    delete pt8Central;
//    delete pt8Bottom;

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::event(QEvent *event)
{
    switch (event->type()) {
    case testType::type1:
    {
        QEvent tocenterEvent((QEvent::Type)type2);
        QApplication::sendEvent(pKRCentral, &tocenterEvent);
        break;
    }
    default:
        break;
    }
    return QMainWindow::event(event);
}

