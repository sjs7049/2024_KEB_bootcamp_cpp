// 5-11. 0~100의 범위에 있는 점수 리스트를 읽어 들이고, 가장 작은 점수와 가장 큰 점수를 출력하세요.
// 사용자로부터 점수를 읽어 들일 때는 적어도 1개, 그리고 10개 이하로만 읽어 들이게 하세요.

#include <iostream>
using namespace std;

int main()
{
    int score;
    int max{0}, min{100};
    int cnt = 0;

    cout << "Input the number between 0 and 100: ";
    while(cin >> score){
        cnt++;
        if(cnt > 0 && cnt <=10){
            if(score > max){
            max = score;
            }
            if(score < min){
                min = score;
            }
            cout << "Input the number between 0 and 100: ";
        }
        else{
            break;
        }
    }
    cout << "\nThe max of scores is " << max << endl;
    cout << "The min of scores is " << min << endl;
    return 0;
}