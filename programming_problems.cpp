// 4-2. 3개의 정수를 입력받고, 가장 작은 것을 출력하는 프로그램을 만드세요.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    int min;

    cout << "3개의 정수를 입력하세요: ";
    cin >> num1 >> num2 >> num3;

    if(num1 < num2 && num1 < num3){
        min = num1;
    }
    else if(num2 < num1 && num2 < num3){
        min = num2;
    }
    else{
        min = num3;
    }
    cout << "가장 작은 수는 " << min << endl;
    return 0;
}