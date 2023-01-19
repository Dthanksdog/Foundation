#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>
class point{
private:
    float m_x;
    float m_y;
public:
    void setxy(float x=0.0,float y=0.0){m_x=x;m_y=y;}
    float getx(){return m_x;}
    float gety(){return m_y;}
};

class  circle{
private:
    point m_p;
    float m_r;
public:
    void setpoint(float x=0.0,float y=0.0)
    {
        m_p.setxy(x,y);

    }
    void setr(float r)
    {
        m_r=r;
    }
    point getpoint()
    {
        return m_p;
    }
    float getr()
    {
        return m_r;
    }

    void ifpointincircle(point &po)
    {
        float dis=(po.getx()-m_p.getx())*(po.getx()-m_p.getx())+(po.gety()-m_p.gety())*(po.gety()-m_p.gety());
        if (dis>m_r*m_r)
            cout<<"点在圆外"<<endl;
        else if (dis==m_r*m_r)
            cout<<"点在圆上"<<endl;
        else
            cout<<"点在圆内"<<endl;

    }
};


void test1()
{
    point p0;
    circle c;
    p0.setxy(1,0);
    c.setpoint(0,0);
    c.setr(1);
    c.ifpointincircle(p0);


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
