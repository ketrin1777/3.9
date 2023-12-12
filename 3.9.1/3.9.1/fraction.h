#pragma once

#include <iostream>
#include <numeric>

class Fraction
{
private:
    int numerator_;
    int denominator_;
public:
    const Fraction(int numerator, int denominator);

    bool operator==(const Fraction& other);
    bool operator!=(const Fraction& other);
    bool operator>(const Fraction& other);
    bool operator<(const Fraction& other);
    bool operator>=(const Fraction& other);
    bool operator<=(const Fraction& other);
};

