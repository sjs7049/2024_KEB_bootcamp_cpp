// 6-8. 랜덤한 숫자를 2, 4, 6, 8, 10 중에서만 만들어 10개를 출력하는 프로그램을 작성하세요.

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));

    for(int i = 0; i < 10; i++){
        int tmp = (rand() % 5 + 1) * 2;
        cout << tmp << " ";
    }
    cout << endl;
    return 0;
}