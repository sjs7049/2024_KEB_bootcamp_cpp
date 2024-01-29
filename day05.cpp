#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

class Fraction
{
public:
    Fraction(int num, int den = 1)
    : numerator(num), denominator(den) {
        normalize();
    }
    int getNumerator() const{ return numerator; }
    int getDenominator() const{ return denominator; }
    void setNumerator(int num) {
        numerator = num; 
        normalize();
    }
    void setDenominator(int den) {
        denominator = den;
        normalize();
    }
    void print() const{
        cout << numerator << "/" << denominator << endl;
    }

private:
    int numerator, denominator;
    int gcd(int n, int m){
        int gcd = 1;
        for(int i = 1; i <= n && i <= m; i++){
            if(n % i == 0 && m % i == 0){
                gcd = i;
            }
        }
        return gcd;
    }
    void normalize(){
        if(denominator == 0){
            cout << "잘못된 분모의 값입니다." << endl;
            assert(false);
        }

        if(denominator < 0){
            numerator = -numerator;
            denominator = -denominator;
        }

        int divisor = gcd(abs(numerator), abs(denominator));
        numerator /= divisor;
        denominator /= divisor;
    }
};

Fraction& larger(Fraction& fract1, Fraction& fract2){
    if((fract1.getNumerator()*fract2.getDenominator()) > (fract1.getDenominator()*fract2.getNumerator())){
        return fract1;
    }
    return fract2;
}

int main()
{
    Fraction fract1(3, 13);
    Fraction fract2(5, 17);
    cout << "첫 번째 쌍에서 더 큰 분수: ";
    larger(fract1, fract2).print();

    Fraction fract3(4, 9);
    Fraction fract4(1, 6);
    cout << "두 번째 쌍에서 더 큰 분수: ";
    larger(fract3, fract4).print();
    return 0;
}