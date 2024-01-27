// 6-5. 랜덤 숫자 생성기의 동작을 확인해볼 수 있게 10~99 범위의 숫자 10개로 5개의 세트를 만들고, 
// 각 세트의 합을 구하는 프로그램을 만드세요. 

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));

    int cnt = 0;
    while(cnt < 5){
        int sum = 0;
        for(int i = 0; i < 10; i++){
            int tmp = rand() % (99 - 10 + 1) + 10;
            sum += tmp;
        }
        cnt++;
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}