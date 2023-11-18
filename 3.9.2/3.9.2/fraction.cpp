#include "fraction.h"


Fraction::Fraction(int numerator, int denominator)
{
    numerator_ = numerator;
    denominator_ = denominator;
}


Fraction Fraction::operator+(Fraction& other) {
    Fraction res(0, 0);
    int num = std::lcm(this->denominator_, other.denominator_);
    res.denominator_ = num;
    res.numerator_ = (this->numerator_ * (num / this->denominator_)) + (other.numerator_ * (num / other.denominator_));
    int del = std::gcd(res.numerator_, res.denominator_);
    res.denominator_ = res.denominator_ / del;
    res.numerator_ = res.numerator_ / del;
    return res;

}
Fraction Fraction::operator-(Fraction& other) {
    Fraction res(0, 0);
    int numb = std::lcm(this->denominator_, other.denominator_);
    res.denominator_ = numb;
    res.numerator_ = (this->numerator_ * (numb / this->denominator_)) - (other.numerator_ * (numb / other.denominator_));
    int del = std::gcd(res.numerator_, res.denominator_);
    res.denominator_ = res.denominator_ / del;
    res.numerator_ = res.numerator_ / del;
    return res;
}

Fraction Fraction::operator/(Fraction& other) {
    Fraction res(0, 0);

    res.denominator_ = this->denominator_ * other.numerator_;;
    res.numerator_ = this->numerator_ * other.denominator_;
    int del = std::gcd(res.numerator_, res.denominator_);
    res.denominator_ = res.denominator_ / del;
    res.numerator_ = res.numerator_ / del;
    return res;
}
Fraction Fraction::operator-() {
    return !(*this < other);
}
Fraction& Fraction::operator++() {
    this->numerator_ += this->denominator_;
    return *this;
}
Fraction Fraction::operator++(int) {
    Fraction res = *this;
    this->numerator_ += this->denominator_;
    return res;
}
Fraction& Fraction::operator--() {
    this->numerator_ -= this->denominator_;
    return *this;
}
Fraction Fraction::operator--(int) {
    Fraction res = *this;
    this->numerator_ -= this->denominator_;
    return res;
}

std::string Fraction::to_string()
{
    return std::to_string(numerator_) + "/" + std::to_string(denominator_);
}