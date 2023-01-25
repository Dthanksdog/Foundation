#include "widget.h"
#include<QPushButton>
#include<QDebug>
#include"teacher.h"
#include"student.h"

#define N 0

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(800,600);
    this->setWindowTitle("高三一班");
    Teacher* tea=new Teacher(this);
    Student* stu=new Student(this);

#if N
    void(Teacher::*p1)(QString sport)=&Teacher::classisover;
    void(Student::*p2)(QString sport)=&Student::play;
    connect(tea,p1,stu,p2);
#else
    void(Teacher::*p1)()=&Teacher::classisover;
    void(Student::*p2)()=&Student::play;
    connect(tea,p1,stu,p2);
#endif
  QPushButton* btn=new QPushButton("下课",this);
  btn->move(300,200);
  connect(btn, &QPushButton::clicked, [=](){
#if N
    emit tea->classisover("打篮球");
#else
    emit tea->classisover();
#endif
  });
}

Widget::~Widget()
{
}

