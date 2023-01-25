#include "student.h"
#include<QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::play()
{
    qDebug()<<"去操场"<<endl;
}

void Student::play(QString sport)
{
    qDebug()<<"去操场"<<sport<<endl;
}


