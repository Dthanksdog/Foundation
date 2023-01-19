#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>

class  cube{
private:
    int m_l;
    int m_w;
    int m_h;
public:
    void setl(int l)
    {
        m_l=l;
    }
    void setw(int w)
    {
        m_w=w;
    }
    void seth(int h)
    {
        m_h=h;
    }
    int getl()
    {
        return m_l;
    }
    int getw()
    {
        return m_w;
    }
    int geth()
    {
        return m_h;
    }
    int getc()
    {
        return 2*(m_l*m_h+m_w*m_h+m_l*m_w);
    }
    int gets()
    {
        return m_l*m_h*m_w;
    }
    bool comparecub2(cube &a)
    {
        if(m_h==a.geth()&&a.getw()==m_w&&a.getl()==m_l)
            return true;
        return false;
    }
};

bool comparecub1(cube &a,cube &b)
{
    if(a.geth()==b.geth()&&a.getw()==b.getw()&&a.getl()==b.getl())
        return true;
    return false;
}

void test1()
{
   cube cub1;
   cub1.setl(10);
   cub1.setw(10);
   cub1.seth(10);
   cout<<"1的周长："<<cub1. getc()<<"面积"<<cub1. gets()<<endl;
   cube cub2;
   cub2.setl(10);
   cub2.setw(10);
   cub2.seth(20);
   cout<<"2的周长："<<cub2. getc()<<"面积"<<cub2. gets()<<endl;

   if(comparecub1(cub1,cub2)==true)
       cout<<"  相等"<<endl;
   else
       cout<<"不相等"<<endl;
   if(cub1.comparecub2(cub2)==true)
       cout<<"  相等"<<endl;
   else
       cout<<"不相等"<<endl;


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
