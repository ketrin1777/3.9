#pragma once

#include <iostream>
#include <numeric>
#include <string>


class Fraction
{
private:
    int numerator_;
    int denominator_;
public:
    Fraction(int numerator, int denominator);

    Fraction operator+(Fraction& other);
    Fraction operator-(Fraction& other);
    Fraction operator*(Fraction& other);
    Fraction operator/(Fraction& other);
    Fraction& operator++();
    Fraction operator++(int);
    Fraction& operator--();
    Fraction operator--(int);
    std::string to_string();
};