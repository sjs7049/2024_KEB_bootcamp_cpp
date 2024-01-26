// 4-7. 도매점에서 물건을 구매할 때, 다음과 같이 수량에 따라 추가적인 할인이 들어갑니다.
// 물건 하나의 가격과 구매 수량을 입력받고, 할인이 적용된 전체 가격을 출력하는 프로그램을 만드세요.

// 1~9개: 0%, 10~49개: 3%, 50~99개: 5%, 100개 이상: 10%

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int price, purchaseQuantity;
    double totalPrice;

    cout << "물건 하나의 가격과 구매 수량을 입력하세요: ";
    cin >> price >> purchaseQuantity;

    if(purchaseQuantity >= 1 && purchaseQuantity < 10){
        totalPrice = (price * purchaseQuantity);
    }
    else if(purchaseQuantity >= 10 && purchaseQuantity < 50){
        totalPrice = (price * purchaseQuantity) * (1.0 - 0.03);
    }
    else if(purchaseQuantity >= 50 && purchaseQuantity < 100){
        totalPrice = (price * purchaseQuantity) * (1.0 - 0.05);
    }
    else{
        totalPrice = (price * purchaseQuantity) * (1.0 - 0.10);
    }
    cout << "할인이 적용된 전체 가격: " << totalPrice << endl;
    return 0; 
}