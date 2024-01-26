// 3-14. 1,400달러의 텔레비전, 220달러의 DVD 플레이어, 35.20달러의 리모컨 3가지 제품을
// 판매하는 회사가 있습니다. 고객이 구입한 장비의 수를 입력으로 받는다고 할 때, 
// 8.25%의 소비세가 추가된 전체 비용을 계산하는 프로그램을 만드세요.

#include <iostream>
using namespace std;

int main()
{
    double television{1400}, dvd{220}, remoteControl{35.20};
    int tvCnt, dvdCnt, rcCnt;
    double totalPrice{0.00};

    cout << "텔레비전, DVD 플레이어, 리모컨을 구입한 장비의 수를 각각 입력하세요: ";
    cin >> tvCnt >> dvdCnt >> rcCnt;

    totalPrice = television * tvCnt + dvd * dvdCnt + remoteControl * rcCnt;
    totalPrice += (totalPrice * 0.0825);

    cout << "전체 비용: " << totalPrice << "달러" << endl;
    return 0;
}