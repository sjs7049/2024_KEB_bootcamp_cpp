#include "fraction.h"
#include <cassert>
#include <cmath>

Fraction::Fraction(int num, int den)
: numerator(num), denominator(den){
    normalize();
}
Fraction::Fraction()
: numerator(0), denominator(1){

}
Fraction::Fraction(const Fraction& frac)
: numerator(frac.numerator), denominator(frac.denominator){

}
Fraction::~Fraction(){}

int Fraction::getNumerator() const{
    return numerator;
}
int Fraction::getDenominator() const{
    return denominator;
}
void Fraction::print() const{
    cout << numerator << "/" << denominator << endl;
}

void Fraction::setNumerator(int num){
    numerator = num;
    normalize();
}
void Fraction::setDenominator(int den){
    denominator = den;
    normalize();
}

void Fraction::normalize(){
    if(denominator == 0){
        cout << "잘못된 분모 값입니다." << endl;
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

int Fraction::gcd(int n, int m){
    int gcd = 1;
    for(int i = 1; i <= n && i <= m; i++){
        if(n % i == 0 && m % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main()
{
    cout << "생성한 분수 4개를 출력합니다." << endl;
    Fraction fract1;
    Fraction fract2(14,21);
    Fraction fract3(-11,8);
    Fraction fract4(fract3);

    cout << "fract1: ";
    fract1.print();
    cout << "fract2: ";
    fract2.print();
    cout << "fract3: ";
    fract3.print();
    cout << "fract4: ";
    fract4.print();

    cout << "두 분수를 변경하고 출력합니다: " << endl;
    fract1.setNumerator(4);
    cout << "fract1: ";
    fract1.print();
    fract2.setDenominator(-5);
    cout << "fract2: ";
    fract2.print();

    cout << "접근자로 분자와 분모 따로 확인하기:" << endl;
    cout << "fract1의 분자: " << fract1.getNumerator() << endl;
    cout << "fract2의 분모: " << fract2.getDenominator() << endl;

    return 0;
}