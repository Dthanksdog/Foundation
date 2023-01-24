//#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
//#include <QApplication>

class person{
private:
    int num;
public:
    person(int num):num(num){
    }
    void showperson(){
        cout<<"num="<<num<<endl;
    }
};

class smartpointer{
public:
    person* pperson;
    smartpointer(person* p){
        this->pperson=p;
    }
    person* operator->(){
        return this->pperson;
    }
    person& operator*(){
        return *(this->pperson);
    }
    ~smartpointer(){
        if(pperson!=NULL){
            delete pperson;
            pperson=NULL;
        }
    }
};


void test1()
{
    smartpointer pointer (new person(200));
    pointer->showperson();
    (*pointer).showperson();
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
