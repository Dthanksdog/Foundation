#include "widget.h"
#include<QPushButton>
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("信号");
    this->resize(800,600);
    QPushButton *button= new QPushButton("戳我呀",this);
    QPushButton *button1=new QPushButton("咬我呀",this);
    QPushButton *close =new QPushButton("关闭",this);
    button->move(400,300);
    close->move(680,0);
    connect(close,&QPushButton::clicked,this,&QWidget::close);
    connect(button,&QPushButton::clicked,[=](){
    QString text=button->text();
    qDebug()<<text<<endl;
    button->setText("戳你咋地");
     });
}

Widget::~Widget()
{
}

