// 4-4 차량의 종류(일반 승용차는 'c', 버스는 'b', 트럭은 't')와 주차장에서 차량이 있던
// 시간을 입력한 뒤, 다음과 같은 주차 요금에 따라서 요금을 계산하는 프로그램을 작성하세요.

// 일반 승용차: 시간당 2달러, 버스: 시간당 3달러, 트럭: 시간당 4달러

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char vehicleType;
    int time, fee;

    cout << "차량의 종류와 있던 시간 입력: ";
    cin >> vehicleType >> time;

    switch (vehicleType)
    {
    case 'c':
        fee = time * 2;
        break;
    case 'b':
        fee = time * 3;
        break;
    case 't':
        fee = time * 4;
        break;
    }
    cout << "주차 요금은 " << fee << "달러" << endl;
    return 0;
}