#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>

class car{
public:
    string mcar="小汽车";
    car(string car)
    {
        mcar=car;
        cout<<"c构造函数"<<endl;
    }
    ~car()
    {
        cout<<"c析构函数"<<endl;
    }
};
class tractor{
public:
    string mtractor="拖拉机";
    tractor(string tractor)
    {
        mtractor=tractor;
        cout<<"t构造函数"<<endl;
    }
    ~tractor()
    {
        cout<<"t析构函数"<<endl;
    }
};

class person{
private:
    car pcar;
    tractor ptractor;
    string mname="人";
    int mage=0;

public:
    person(string carname,string tractorname,string name,int age)
        :pcar(carname),ptractor(tractorname),mname(name),mage(age)
    {
        cout<<"p有参构造"<<endl;
    }
    person(const person &ob):pcar(ob.pcar),ptractor(ob.ptractor)
    {
        cout<<"p拷贝构造"<<endl;
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
        cout<<mage<<"岁的"<<mname<<"开着"<<pcar.mcar<<"去上班"<<endl;
    }
    void goworkbytractor()
    {
        cout<<mage<<"岁的"<<mname<<"开着"<<ptractor.mtractor<<"去上班"<<endl;
    }
    ~person()
    {
        cout<<"p析构函数"<<endl;
    }

};


void test1()
{
   person zhangsan("宝马","东风拖拉机","张三",40);
   zhangsan.goworkbycar();
   zhangsan.goworkbytractor();
   person lisi(zhangsan);
   lisi.setname("李四");
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
