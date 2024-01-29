#include <iostream>
using namespace std;

void swap(int* pX, int* pY){
    int tmp = *pX;
    *pX = *pY;
    *pY = tmp;
}

int main()
{
    int x = 10;
    int y = 20;

    cout << "스왑하기 전의 x와 y의 값" << endl;
    cout << "x: " << x << "  " << "y: " << y << endl;

    swap(&x, &y);
    cout << "스왑 후의 x와 y의 값" << endl;
    cout << "x: " << x << "  " << "y: " << y << endl;   
    return 0;
}