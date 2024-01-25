// 최솟값과 최댓값 찾기

#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int size, num;
    int max = numeric_limits<int>::min();
    int min = numeric_limits<int>::max();

    do
    {
        cout << "음수가 아닌 수를 리스트의 크기를 입력하세요: ";
        cin >> size;
    } while (size < 0);
    
    for(int i = 0; i < size; i++){
        cout << "다음 숫자를 입력하세요: ";
        cin >> num;

        if(num > max){
            max = num;
        }
        if(num < min){
            min = num;
        }
    }

    cout << "최솟값 = " << min << endl;
    cout << "최댓값 = " << max << endl;
    return 0;
}