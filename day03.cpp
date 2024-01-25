
#include <iostream>
using namespace std;

int main()
{
    int guess;

    srand(time(0));
    int n = rand() % (15 - 5 + 1) + 5;

    int cnt = 1;
    bool found = false;
    while(cnt <= 5 && !found){
        do
        {
            cout << "5~15 사이의 정수를 입력하세요: ";
            cin >> guess;
        } while (guess < 5 || guess > 15);

        if(guess == n){
            found = true;
        }
        else if(guess > n){
            cout << "더 작은 숫자입니다." << endl;
        }
        else{
            cout << "더 큰 숫자입니다. " << endl;
        }
        cnt++;
    }

    if(found){
        cout << "축하합니다. 추측에 성공했습니다. 답 = " << n << endl;
    }
    else{
        cout << "아쉽게 추측 실패했습니다. 답 = " << n << endl;
    }
    return 0;
}