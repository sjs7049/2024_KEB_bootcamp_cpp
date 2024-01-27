// 5-6. 1~100의 범위에 있는 정수 중에서 7로 나눌 수 있는 숫자들을 출력하세요.

#include <iostream>
using namespace std;

int main()
{   
    cout << "The number between 1 and 100 that is divisible by 7" << endl;
    for(int i = 1; i < 100; i++){
        if(i % 7 == 0){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}