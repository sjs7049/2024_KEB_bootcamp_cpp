// 6-10. 1~10 범위의 정수로 사용해서 log2^x
// log2^x = log10^x / log10^2

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++){
        cout << log10(i) / log10(2) << " ";
    }
    cout << endl;
    return 0;
}