// 5-5. 사용자에게 두 양의 정수를 입력받고 두 정수를 범위로 내부에 있는 
// 홀수와 짝수를 출력하는 프로그램을 만드세요.

#include <iostream>
using namespace std;

int main()
{   
    int num1, num2;

    do
    {
        cout << "Input the first positive integer: ";
        cin >> num1;
    } while (num1 <= 0);

    do
    {
        cout << "Input the second positive integer: ";
        cin >> num2;
    } while (num2 <= 0);

    if(num1 > num2){
        int tmp = num1;
        num1 = num2;
        num2 = tmp;        
    }  

    cout << "\nOdd and even numbers between " << num1 << " and " << num2 << endl;
    cout << "Even numbers: ";
    for(int i = (num1 + 1); i < num2; i++){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }
    cout << "\nOdd numbers: ";
    for(int i = (num1 + 1); i < num2; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}