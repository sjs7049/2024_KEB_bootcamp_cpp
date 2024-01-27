// 5-1. 사용자로부터 패턴의 종류(1~4)와 크기(1~9)를 입력받고 다음과 같은 패턴을 출력하는 프로그램을 만드세요.

#include <iostream>
using namespace std;

int main()
{
    int type, size;

    do
    {
        cout << "Input the pattern type number: ";
        cin >> type;
    } while (type < 0 || type > 4);

    do
    {
        cout << "Input the pattern size: ";
        cin >> size;
    } while (size < 0 || size > 9);

    switch (type)
    {
    case 1:
        for(int i = 0; i < size; i++){
            for(int j = 1; j <= (i+1); j++){
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 2:
        for(int i = 1; i <= size; i++){
            for(int j = 0; j < (i-1); j++){
                cout << " ";
            }
            for(int k = size; k > (i-1) ; k--){
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 3:
        for(int i = 0; i < size; i++){
            for(int j = size; j > i ; j--){
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 4:
        for(int i = 1; i <= size; i++){
            for(int j = (size-1); j > (i-1); j--){
                cout << " ";
            }
            for(int k = 1; k <= i ; k++){
                cout << "*";
            }
            cout << endl;
        }
        break;
    
    default:
        break;
    }
}