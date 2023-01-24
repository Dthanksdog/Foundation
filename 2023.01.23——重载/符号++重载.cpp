#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>

class data{
    friend ostream& operator<<(ostream &out,data &ob );
private:
    int a;
    int b;
public:
    data(int a,int b):a(a),b(b){}
    data operator++(){
        a++;
        b++;
        return *this;
    }
    data& operator++(int){
        static data old=*this;
        a++;
        b++;
        return old;
    }

};

ostream& operator<<(ostream &out,data &ob ){
    out<<"a="<<ob.a<<" "<<"b="<<ob.b<<endl;
    return out;
}


void test1()
{
  data ob1(100,50);
  ++ob1;
  cout<<ob1;
  cout<<ob1++;
  cout<<ob1;
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
