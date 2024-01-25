// 적어도 또는 모두 조건에 충족하는 숫자 찾기
/*
결과
리스트의 크기를 입력하세요: 5
다음 숫자를 입력하세요: 12
다음 숫자를 입력하세요: 32
다음 숫자를 입력하세요: 28
28은(는) 7로 나눌 수 있습니다.
*/

#include <iostream>
using namespace std;

int main()
{
    int size, num;
    bool found = false;

    do
    {
        cout << "리스트의 크기를 입력하세요: ";
        cin >> size;
    } while(size < 0);

    for(int i = 0; (i < size) && (!found); i++){
        cout << "다음 숫자를 입력하세요: ";
        cin >> num;
        found = (num % 7 == 0);
    }

    if(found){
        cout << num << "은(는) 7로 나눌 수 있습니다." << endl;
    }
    else{
        cout << "리스트 내부에 7로 나눌 수 있는 숫자가 없습니다." << endl;
    }
    return 0;
}