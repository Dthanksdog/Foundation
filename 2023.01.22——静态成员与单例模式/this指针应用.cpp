#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>

class mycout{
public:
    mycout& coutob(string ob)
    {
        cout<<ob;
        return *this;
    }
};

void test1()
{
    mycout ob;
    ob.coutob("reine").coutob(" says").coutob(" hello");
    cout<<endl;
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
