// 5-4. 0을 센티넬로 사용해서 사용자로부터 양의 정수와 음의 정수 리스트를 읽어 들이는 프로그램을 만드세요.
// 양의 정수가 몇 개 입력되었는지, 음의 정수가 몇 개 입력되었는지 출력합니다.

#include <iostream>
using namespace std;

int main()
{   
    int integer;
    int positiveIntCnt{0}, negativeIntCnt{0};

    do
    {
        cout << "Input the integer: ";
        cin >> integer;

        if(integer > 0){
            positiveIntCnt++;
        }
        else if(integer < 0){
            negativeIntCnt++;
        }
    } while (integer == 0);
    
    cout << "The number of positive integers is " << positiveIntCnt << endl;
    cout << "The number of negative integers is " << negativeIntCnt << endl;
    return 0;
}