#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "widgetfactory.h"
#include "krfactory.h"
#include "ComFunc.h"
#include "CGlobalSubPub.h"
#include "SubPubImpl.h"
#include <QVBoxLayout>
#include <QDebug>
#include <QEvent>
#include <QLibrary>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto conf = ReadConf(qApp->applicationDirPath() + "/conf.json");
    qDebug() << std::get<QString>(conf);
    auto strList = std::get<QVariant>(conf).toStringList();
    for (auto str : strList)
    {
        qDebug() << "str:" << str;
    }
    CGlobalSubPub::getInstance()->installFuncVariantList(strList);
    WidgetFactory* factory = new KRFactory;
    TitleWidget* pKRTitle = factory->createTitleWidget(this);
    CentralWidget* pKRCentral = factory->createCentralWidget(this);
    QVBoxLayout* pLayout = new QVBoxLayout(ui->centralwidget);
    pLayout->addWidget(pKRTitle);
    pLayout->addWidget(pKRCentral);
}

MainWindow::~MainWindow()
{
    delete ui;
}
