// 함수 오버로딩

#include <iostream>
using namespace std;

int max(int num1, int num2){
    int larger = (num1 > num2 ? num1 : num2);
    return larger;
}

int max(int num1, int num2, int num3){
    return max(max(num1, num2), num3);
}

int max(int num1, int num2, int num3, int num4){
    return max(max(max(num1, num2), num3), num4);   
}

int main()
{
    cout << "maximum(5, 7) = " << max(5,7) << endl;
    cout << "maximum(7, 9, 8) = " << max(7,9,8) << endl;
    cout << "maximum(14, 3, 12, 11) = " << max(14,3,12,11) << endl;
    return 0;
}