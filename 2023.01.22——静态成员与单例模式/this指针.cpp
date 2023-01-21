#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>

class Data{
public:
    int m_num;
    void findnum(int num)
    {
        this->m_num=num;
    }
};

void test1()
{
    Data ob;
    ob.findnum(6);
    cout<<"mnum="<<ob.m_num<<endl;
}

int main(int argc, char *argv[])
{
    test1();
    return 0;
//    QApplication a(argc, argv);
//    Widget w;
//    w.show();
//    return a.exec();
}
