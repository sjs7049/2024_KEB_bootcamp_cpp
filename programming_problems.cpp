// 5-2. 사용자로부터 패턴의 종류와 크기를 입력받고 다음과 같은 패턴을 출력하는 프로그램을 만드세요.

#include <iostream>
using namespace std;

int main()
{
    int type, size;

    do
    {
        cout << "Input the pattern type number: ";
        cin >> type;
    } while (type < 0 || type > 2);

    do
    {
        cout << "Input the pattern size: ";
        cin >> size;
    } while (size < 0 || size > 9);

    switch (type)
    {
    case 1:
        for(int i = 0; i < size; i++){
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            for(int k = 2*size; k > (2*i+1); k--){
                cout << "*";
            }
             for(int l = 0; l < i; l++){
                cout << " ";
            }
            cout << endl;
        }
        break;
    case 2:
        for(int i = 0; i < size; i++){
            for(int j = size; j > i; j--){
                cout << " ";
            }
            for(int k = 0; k < (2*i+1); k++){
                cout << "*";
            }
            for(int l = size; l > i; l--){
                cout << " ";
            }
            cout << endl;
        }
        break;
    default:
        break;
    }
    return 0;
}