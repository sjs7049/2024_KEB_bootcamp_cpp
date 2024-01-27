// 6-7. rand 함수를 사용해서 소수점 뒤에 한 자리만 있는 랜덤한 숫자를 10개 출력하는 프로그램을 작성하세요.

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));

    for(int i = 0; i < 10; i++){
        double tmp = (rand() % (1000 - 1 + 1) + 1) / 10.0;
        cout << tmp << " ";
    }
    cout << endl;
    return 0;
}