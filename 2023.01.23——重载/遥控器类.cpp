#include "widget.h"
#include <iostream>
#include <cstring>
using namespace std;
#include <QApplication>


class TV{
    friend class Remote;
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
        cout<<"电视机状态"<<(this->state==on?"开机":"关机")<<endl;
        cout<<"电视机音量"<<volume<<endl;
        cout<<"电视机频道"<<channel<<endl;
    }
};

class Remote{
private:
    TV *rtv;
public:
    Remote(TV *rtv)
    {
        this->rtv=rtv;
    }
    void rvolup(){
        this->rtv->volumeup();
    }
    void rvoldown(){
        this->rtv->volumedown();
    }
    void rchaup(){
        this->rtv->channelup();
    }
    void rchadown(){
        this->rtv->channeldown();
    }
    void rstate(){
        this->rtv->stateswitch();
    }
    void rchashift(int num){
        this->rtv->channel=num;
    }
    void rshowTV(){
        this->rtv->showTV();
    }
};


void test1()
{
    TV mytv;
    Remote remote(&mytv);
    remote.rstate();
    remote.rvolup();
    remote.rvolup();
    remote.rvolup();
    remote.rchaup();
    remote.rchaup();
    remote.rchaup();
    remote.rshowTV();
    remote.rchashift(75);
    remote.rshowTV();




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
