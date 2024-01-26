// 4-1. 사용자로부터 부호 없는 두 자리 정수를 입력받고, 
// 자릿수의 값을 바꿔서 출력하는 프로그램을 만드세요. 79 9+

#include <iostream>
using namespace std;

int main()
{
    unsigned int num;

    do
    {
        cout << "부호 없는 두 자리 정수 입력: ";
        cin >> num;
    } while (num < 10 && num > 99);
    
    int tmp = 0;
    while(num != 0){
        tmp *= 10;
        tmp += num % 10;
        num /= 10;
    }
    cout << "자릿수 바꾼 값: " << tmp << endl;
    return 0;
}