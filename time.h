#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time
{
public:
    Time(int hours, int minutes, int seconds);
    Time();
    ~Time();
    
    void print() const;
    void tick();
private:
    int hours, minutes, seconds;
    void normalize();
};

#endif