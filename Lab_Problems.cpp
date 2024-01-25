// 팩토리얼 구현하기

#include <iostream>
using namespace std;

int main()
{
    int factorialSize;
    unsigned long long result = 1;

    cout << "팩토리얼의 크기를 입력하세요: ";
    cin >> factorialSize;

    for(int i = factorialSize; i > 0; i--){
        result *= i;
    }

    cout << factorialSize <<"! = " << result << endl;
    return 0;
}