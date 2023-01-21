#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>


class TV{
    enum{on, off};
    enum{minVol=0,maxVol=100};
    enum{minCha=1,maxCha=255};
private:
    int state;
    int volume;
    int channel;
public:
    TV(){
        state=off;
        volume=20;
        channel=1;
    }
    void stateswitch(){
        this->state=(this->state==on?off:on);
    }
    void volumeup(){
        if(this->volume>=maxVol)
            return;
        this->volume+=2;
    }
    void volumedown(){
        if(this->volume<=minVol)
            return;
        this->volume-=2;
    }
    void channelup(){
        if(this->channel>=maxCha)
            return;
        this->channel++;
    }
    void channeldown(){
        if(this->channel>=minCha)
            return;
        this->channel++;
    }
    void showTV(){
        cout<<"���ӻ�״̬"<<(this->state==on?"����":"�ػ�")<<endl;
        cout<<"���ӻ�����"<<volume<<endl;
        cout<<"���ӻ�Ƶ��"<<channel<<endl;
    }
};



void test1()
{
    TV mytv;
    mytv.stateswitch();
    mytv.volumeup();
    mytv.volumeup();
    mytv.volumeup();
    mytv.volumeup();
    mytv.volumeup();
    mytv.channelup();
    mytv.channelup();
    mytv.channelup();
    mytv.showTV();

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
