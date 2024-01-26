// 4-8. 사용자로부터 점의 좌표 x와 y를 입력받고, 직교 좌표계에서 점이 몇 사분면에
// 위치하는지를 출력하는 프로그램을 만드세요. 

#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "점의 좌표 x와 y를 입력하세요: ";
    cin >> x >> y;

    if(x > 0 && y > 0){
        cout << "제 1사분면" << endl;
    }
    else if(x < 0 && y > 0){
        cout << "제 2사분면" << endl;
    }
    else if(x < 0 && y < 0){
        cout << "제 3사분면" << endl;
    }
    else if(x > 0 && y < 0){
        cout << "제 4사분면" << endl;
    }
    else{
        cout << "어떠한 사분면도 아닙니다." << endl;
    }
    return 0;
    
}