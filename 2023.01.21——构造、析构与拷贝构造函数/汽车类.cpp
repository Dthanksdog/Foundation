#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>

class car{
public:
    string mcar="С����";
    car(string car)
    {
        mcar=car;
        cout<<"c���캯��"<<endl;
    }
    ~car()
    {
        cout<<"c��������"<<endl;
    }
};
class tractor{
public:
    string mtractor="������";
    tractor(string tractor)
    {
        mtractor=tractor;
        cout<<"t���캯��"<<endl;
    }
    ~tractor()
    {
        cout<<"t��������"<<endl;
    }
};

class person{
private:
    car pcar;
    tractor ptractor;
    string mname="��";
    int mage=0;

public:
    person(string carname,string tractorname,string name,int age)
        :pcar(carname),ptractor(tractorname),mname(name),mage(age)
    {
        cout<<"p�вι���"<<endl;
    }
    person(const person &ob):pcar(ob.pcar),ptractor(ob.ptractor)
    {
        cout<<"p��������"<<endl;
    }
    void setname(string name)
    {
        mname=name;
    }
    void setage(int age)
    {
        mage=age;
    }
    void goworkbycar()
    {
        cout<<mage<<"���"<<mname<<"����"<<pcar.mcar<<"ȥ�ϰ�"<<endl;
    }
    void goworkbytractor()
    {
        cout<<mage<<"���"<<mname<<"����"<<ptractor.mtractor<<"ȥ�ϰ�"<<endl;
    }
    ~person()
    {
        cout<<"p��������"<<endl;
    }

};


void test1()
{
   person zhangsan("����","����������","����",40);
   zhangsan.goworkbycar();
   zhangsan.goworkbytractor();
   person lisi(zhangsan);
   lisi.setname("����");
   lisi.setage(28);
   lisi.goworkbycar();
   lisi.goworkbytractor();
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
