#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction
{
public:
    Fraction(int num, int den);
    Fraction();
    Fraction(const Fraction& frac);
    ~Fraction();

    int getNumerator() const;
    int getDenominator() const;
    void print() const;

    void setNumerator(int num);
    void setDenominator(int den);
private:
    int numerator, denominator;
    void normalize();
    int gcd(int n, int m);
};
#endif