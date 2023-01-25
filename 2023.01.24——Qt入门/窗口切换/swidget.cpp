#include "swidget.h"


swidget::swidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("查找");
        this->resize(800,600);
        QPushButton* btn=new QPushButton("返回",this);
        btn->move(650,500);
        connect(btn,&QPushButton::clicked,[=](){
            emit this->back();
        });

}
