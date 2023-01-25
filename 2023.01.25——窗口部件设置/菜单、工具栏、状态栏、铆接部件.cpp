#include "mainwindow.h"
#include<QMenuBar>
#include<QToolBar>
#include<QShortcut>
#include<QDebug>
#include<QStatusBar>
#include<QLabel>
#include<QDockWidget>
#include<QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(800,600);
    QMenuBar* menubar=new QMenuBar(this);

    this->setMenuBar(menubar);
    QMenu* walk=new QMenu("平动模式");
    QMenu* climb=new QMenu("爬坡模式");
    QMenu* clean=new QMenu("清洗模式");
    menubar->addMenu(walk);
    menubar->addMenu(climb);
    menubar->addMenu(clean);
    QAction* quick=new QAction("快速模式");
    QAction* slow=new QAction("慢速模式");
    quick->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_N));
    slow->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_M));
    connect(quick,&QAction::triggered,[=](){
        qDebug()<<"快速运动"<<endl;
    });
    connect(slow,&QAction::triggered,[=](){
        qDebug()<<"慢速速运动"<<endl;
    });
    walk->addAction(quick);
    walk->addSeparator();
    walk->addAction(slow);
    climb->addAction(quick);
    climb->addSeparator();
    climb->addAction(slow);


    QToolBar* toolbar=new QToolBar(this);
    this->addToolBar(toolbar);
    QAction* tube=new QAction("水管");
    QAction* detergent=new QAction("清洁剂");
    toolbar->addAction(tube);
    toolbar->addSeparator();
    toolbar->addAction(detergent);
    toolbar->setFloatable(false);
    toolbar->setAllowedAreas(Qt::LeftToolBarArea);


    QStatusBar* statusbar=new QStatusBar(this);
    this->setStatusBar(statusbar);
    QLabel* l1=new QLabel("电量：88%",this);
    QLabel* l2=new QLabel("速度：0.22m/s",this);
    statusbar->addWidget(l1);
    statusbar->addPermanentWidget(l2);



    QDockWidget* dock=new QDockWidget("控制面板",this);
    this->addDockWidget(Qt::TopDockWidgetArea,dock);
    dock->setAllowedAreas(Qt::TopDockWidgetArea|Qt::BottomDockWidgetArea);

    QPushButton* up=new QPushButton("∧",this);
    up->move(380,300);
    up->resize(100,100);
    up->setFont(QFont("宋体",18));
    QPushButton* down=new QPushButton("∨",this);
    down->move(380,400);
    down->resize(100,100);
    down->setFont(QFont("宋体",18));
    QPushButton* left=new QPushButton("＜",this);
    left->move(280,400);
    left->resize(100,100);
    left->setFont(QFont("宋体",18));
    QPushButton* right=new QPushButton("＞",this);
    right->move(480,400);
    right->resize(100,100);
    right->setFont(QFont("宋体",18));
    QPushButton* cleanser=new QPushButton("喷洒清洁剂",this);
    cleanser->move(150,150);
    cleanser->resize(150,80);
    cleanser->setFont(QFont("宋体",12));
    QPushButton* water=new QPushButton("洒水",this);
    water->move(350,150);
    water->resize(150,80);
    water->setFont(QFont("宋体",12));
    QPushButton* cleaning=new QPushButton("清洁",this);
    cleaning->move(550,150);
    cleaning->resize(150,80);
    cleaning->setFont(QFont("宋体",12));




}

MainWindow::~MainWindow()
{
}

