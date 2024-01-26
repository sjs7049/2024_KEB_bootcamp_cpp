#include <iostream>
#include <cstdlib>
using namespace std;

class RandomInteger
{
private:
    int low;
    int high;
    int value;
public:
    RandomInteger(int l, int h)
        : low(l), high(h) 
    {
        srand(time(0));
        value =  rand() % (high - low + 1) + low;
    }
    ~RandomInteger() {}
    RandomInteger(const RandomInteger& random) = delete;
    void print() const{
        cout << value << endl;
    }
};


int main()
{
    RandomInteger randominteger1(100, 200);
    cout << "100~200 사이의 랜덤한 숫자: " ;
    randominteger1.print();

    RandomInteger randominteger2(400, 600);
    cout << "400~600 사이의 랜덤한 숫자: " ;
    randominteger2.print();

    RandomInteger randominteger3(1500, 2000);
    cout << "1500~2000 사이의 랜덤한 숫자: " ;
    randominteger3.print();

    return 0;
}