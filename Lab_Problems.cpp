// 거듭제곱 곱하기

#include <iostream>
using namespace std;

int main()
{
    unsigned int base, exponent;
    unsigned int result = 1;

    cout << "밑을 음수가 아닌 정수로 입력하세요: ";
    cin >> base;
    cout << "지수를 음수가 아닌 정수로 입력하세요: ";
    cin >> exponent;

    for(int i = 1; i <= exponent; i++){
        result *= base;
    }
    
    cout << base << "^" << exponent << " = " << result << endl;
    return 0;
}