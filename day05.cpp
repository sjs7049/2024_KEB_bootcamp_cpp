// 8-1. 숫자 배열을 거꾸로 출력하기

#include <iostream>
using namespace std;

int main()
{
    const int CAPACITY = 10;
    int numbers[CAPACITY];
    int size;
    do
    {
        cout << "크기를 입력해주세요(1~10): ";
        cin >> size;
    } while (size < 1 || size > 10);
    
    cout << size << "개의 숫자를 입력해주세요: ";
    for(int i = 0; i < size; i++){
        cin >> numbers[i];
    }

    cout << "입력한 숫자들을 거꾸로 출력: ";
    for(int i = size - 1; i >= 0; i--){
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}