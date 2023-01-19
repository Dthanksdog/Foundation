#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;

#include <QApplication>

class person{
private:
    char m_name[20];
    int m_age;
public:
    void initial(const char* name, int age){
        if(name!=NULL)
            strcpy(m_name,name);
        if(age>0&&age<100)
            m_age=age;
    }
    void setname(const char* name)
    {
        if(name!=NULL)
            strcpy(m_name,name);
    }
    void setage(int age){
        if(age>0&&age<100)
            m_age=age;
        else
            cout<<"年龄无效"<<endl;
    }
    char* getname(){
        return m_name;
    }
    int getage(){
        return m_age;
    }
    void showperson()
    {
        cout<<"姓名："<<m_name<<endl<<"年龄："<<m_age<<endl;
    }
};

void test1()
{
   person lucy;
   lucy.initial("lucy",18);
   lucy.showperson();
   lucy.setage(200);
   lucy.setname("tony");
   lucy.setage(38);
   cout<<" 姓名"<<lucy.getname()<<endl;
   cout<<" 年龄"<<lucy.getage()<<endl;
   lucy.showperson();

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
