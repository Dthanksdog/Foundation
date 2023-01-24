#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>

class person
{
    friend ostream& operator<<(ostream &out,person &ob );
//    friend person operator+(person &ob1,person &ob2);
private:
    char* name;
    int num;
public:
    person()
    {
        name=NULL;
        num=0;
        cout<<"无参构造"<<endl;
    }
    person(char* name, int num)
    {
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
        this->num=num;
        cout<<"有参构造"<<endl;
    }
    person operator+(person &ob){
        char* tmp_name=new char[strlen(this->name)+strlen(ob.name)+1];
        strcpy(tmp_name,this->name);
        strcat(tmp_name,ob.name);
        int tmp_num=this->num+ob.num;
        person tmp(tmp_name,tmp_num);
        delete []tmp_name;
        return tmp;
    }
    ~person()
    {
        if(name!=NULL)
            delete [] this->name;
        cout<<"析构"<<endl;
    }
};

ostream& operator<<(ostream &out,person &ob ){
    out<<ob.name<<" "<<ob.num<<endl;
    return out;
}

//person operator+(person &ob1,person &ob2){
//    char* tmp_name=new char[strlen(ob1.name)+strlen(ob2.name)+1];
//    strcpy(tmp_name,ob1.name);
//    strcat(tmp_name,ob2.name);
//    int tmp_num=ob1.num+ob2.num;
//    person tmp(tmp_name,tmp_num);
//    delete []tmp_name;
//    return tmp;
//}

void test1()
{
   person ob1("goody",20);
   person ob2("ryan",26);
   cout<<ob1<<ob2;
   person ob3=ob1+ob2;
   cout<<ob3;
   person ob4=ob1+ob2+ob3;
   cout<<ob4;
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
