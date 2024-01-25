// 3-9. 초 단위(long 자료형)을 입력받았을 떄, 이를 시, 분, 초 단위로 변환하는 프로그램을 만드세요.
#include <iostream>
using namespace std;

int main()
{
    long secondsInput;
    int hours{0}, minutes{0}, seconds{0};

    cout << "초 단위를 입력하세요: ";
    cin >> secondsInput;

    if(secondsInput >= 3600){
        hours = secondsInput / 3600;
        if((secondsInput % 3600) >= 60){
            minutes = (secondsInput % 3600) / 60;
            seconds = ((secondsInput % 3600) % 60);
        }
    }
    else{
        if((secondsInput % 3600) >= 60){
            minutes = (secondsInput % 3600) / 60;
            seconds = ((secondsInput % 3600) % 60);
        }
        else{
            seconds = secondsInput;
        }
    }
    
    cout << "시, 분, 초 단위로 변환한 값: " << hours << "시 " << minutes << "분 " << seconds << "초" << endl;
    return 0;
}