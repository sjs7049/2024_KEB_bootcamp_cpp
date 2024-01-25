// 두 수를 입력 받고 큰 숫자 출력하는 프로그램

#include <iostream>
using namespace std;

int larger(int num1, int num2){
    int largeNumber = (num1 > num2 ? num1 : num2);
     
    return largeNumber;
}

int main()
{
    int n1, n2;

    cout << "Input the first number: ";
    cin >> n1;
    cout << "Input the second number: ";
    cin >> n2;

    cout << "The large number is " << larger(n1, n2) << endl;
    return 0;
}