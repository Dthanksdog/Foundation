#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>

class Room;
class Goodgay;

class Goodgay{
public:
    string name;
    void visit1(Room &room);
    void visit2(Room &room);
    Goodgay(string name){
        this->name=name;
    }

};
class Room{
    friend void Goodgay::visit2(Room &room);
private:
    string bedroom;
public:
    string settingroom;
    Room()
    {
        settingroom="����";
        bedroom="����";
    }
};

void Goodgay::visit1(Room &room){
    cout<<name<<"���Ҽ�"<<room.settingroom<<"�ι�"<<endl;
}
void Goodgay::visit2(Room &room){
    cout<<name<<"���Ҽ�"<<room.settingroom<<"�ι�"<<endl;
    cout<<name<<"���Ҽ�"<<room.bedroom<<"�ι�"<<endl;
}

void test1()
{
    Room myroom;
    Goodgay Tony("Tony");
    Goodgay Jenny("Jenny");
    Tony.visit1(myroom);
    Jenny.visit2(myroom);

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
