#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>

class person{
    char* m_name=NULL;
    int m_age=0;

public:
    person(char* name,int age)
    {
        m_name=name;
        m_name=(char*)calloc(1,strlen(name)+1);
        if(m_name==NULL)
        {
            cout<<"����ʧ��"<<endl;
        }
        cout<<"���ٿռ�ɹ�"<<endl;
        strcpy(m_name,name);
        m_age=age;
        cout<<"�вι���"<<endl;
    }
    person(const person &ob)
    {
        m_name=(char*)calloc(1,strlen(ob.m_name)+1);
        if(m_name==NULL)
        {
            cout<<"����ʧ��"<<endl;
        }
        cout<<"���ٿռ�ɹ�"<<endl;
        strcpy(m_name,ob.m_name);
        m_age=ob.m_age;
        cout<<"��������"<<endl;
    }
    ~person()
    {
        if(m_name!=NULL)
        {
            free (m_name);
            m_name=NULL;
            cout<<"�ռ��ѱ��ͷ�"<<endl;
        }

        cout<<"��������"<<endl;
    }
    void showperson()
    {
        cout<<"����"<<m_age<<"����"<<m_name<<endl;
    }
};


void test1()
{
   person lucy("lucy",18);
   lucy.showperson();
   person tony(lucy);
   tony.showperson();
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
