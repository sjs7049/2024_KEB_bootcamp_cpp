// 5-8. 1~100의 범위에 있는 양의 정수를 읽어 들이고 약수를 출력하세요.

#include <iostream>
using namespace std;

int main()
{   
    int num;

    do
    {
        cout << "Input the positive integer between 1 and 100: ";
        cin >> num;
    } while(num <= 0);

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}