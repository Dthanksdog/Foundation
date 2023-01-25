#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("登录");
        this->resize(800,600);
        swidget* s=new swidget();
        QPushButton* btn=new QPushButton("下一页",this);
        btn->move(650,500);
        connect(btn,&QPushButton::clicked,[=](){
            this->hide();
            s->show();
        });
        connect(s,&swidget::back,[=](){
            this->show();
            s->hide();
        });
}

Widget::~Widget()
{
}

