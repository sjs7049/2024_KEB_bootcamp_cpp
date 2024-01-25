// 3-8. 시간을 시, 분, 초 단위로 입력받았을 때, 이를 초 단위로 변환하는 프로그램을 만드세요.
#include <iostream>
using namespace std;

int main()
{
    int hours, minutes, seconds;
    int convertSeconds;

    cout << "시간을 시, 분, 초 단위로 입력하세요: ";
    cin >> hours >> minutes >> seconds;

    if(hours > 0){
        convertSeconds += (hours * 3600);
        if(minutes > 0){
            convertSeconds += (minutes * 60);
        }
    }
    else{
        if(minutes > 0){
            convertSeconds += (minutes * 60);
        }
    }

    convertSeconds += seconds;
    cout << "초 단위로 변환한 값은 " << convertSeconds << endl;
    return 0;
    
}