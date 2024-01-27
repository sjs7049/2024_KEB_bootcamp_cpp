// 5-9. 1~100의 범위에 있는 양의 정수 2개를 읽어 들이고 공약수를 출력하세요.

#include <iostream>
using namespace std;

int main()
{   
    int num1, num2;

    do
    {
        cout << "Input the first positive integer between 1 and 100: ";
        cin >> num1;
    } while(num1 <= 0);

    do
    {
        cout << "Input the second positive integer between 1 and 100: ";
        cin >> num2;
    } while(num2 <= 0);

    if(num1 > num2){
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    for(int i = 1; i <= num1; i++){
        if((num1 % i == 0) && (num2 % i == 0)){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}