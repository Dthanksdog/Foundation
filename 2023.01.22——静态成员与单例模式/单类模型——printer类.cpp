#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>

class printer{
public:
    static printer* getsingle()
    {
        return single;
    }
    void useprinter(string str)
    {
        cout<<str<<endl;
        count++;
    }
    int count;
private:
    printer(){
        count=0;
    }
    printer(const printer &ob){}

    static printer* single;
};
printer* printer::single=new printer;

void test1()
{
     printer* p1=printer::getsingle();
     p1->useprinter("a����ְ����");
     p1->useprinter("a����챨��");
     p1->useprinter("a�������Ϣ");
     printer* p2=printer::getsingle();
     p2->useprinter("b����ְ����");
     p2->useprinter("b����챨��");
     p2->useprinter("b�������Ϣ");
     cout<<p1->count<<endl;

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
