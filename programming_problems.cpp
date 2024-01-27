// 6-6. 동전을 던졌을 때 앞면 또는 뒷면이 나오는 것처럼, rand 함수를 사용해서 0 또는 1만
// 나오게 하는 코드를 작성하고, 이를 활용해서 동전을 100만번 던지고
// 앞면과 뒷면이 몇 번 나오는지 모방해서 확인하는 프로그램을 작성하세요. 

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int frontCnt{0}, backCnt{0};

    for(int i = 0; i < 1000000; i++){
        int coin = rand() % (1 - 0 + 1);
        if(coin == 0){
            frontCnt++;
        }
        else{
            backCnt++;
        }
    }
    cout << "앞면: " << frontCnt << endl;
    cout << "뒷면: " << backCnt << endl;
    return 0;
}