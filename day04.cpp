#include "time.h"
#include <cassert>

Time::Time(int h, int m, int s)
: hours(h), minutes(m), seconds(s){
    normalize();
}

Time::Time()
: hours(0), minutes(0), seconds(0){

}

Time::~Time(){

}

void Time::tick(){
    seconds++;
    normalize();
}

void Time::print() const{
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

void Time::normalize(){
    if(hours < 0 || minutes < 0 || seconds < 0){
        cout << "유효하지 않은 시간 값입니다." << endl;
        assert(false);
    }

    if(seconds > 59){
        int tmp = seconds / 60;
        seconds %= 60;
        minutes += tmp;
    }
    if(minutes > 59){
        int tmp = minutes / 60;
        minutes %= 60;
        hours += tmp;
    }
    if(hours > 23){
        hours %= 24;
    }
}

int main()
{
    Time time(4,5,27);
    cout << "원래 시간: ";
    time.print();

    cout << "143500초가 지나면: ";
    for(int i = 1; i <= 143500 ; i++){
        time.tick();
    }

    time.print();
    return 0;
}