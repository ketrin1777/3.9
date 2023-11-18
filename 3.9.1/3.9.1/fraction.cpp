#include "fraction.h"


Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}

bool Fraction::operator==(Fraction& other) {
    int res = std::lcm(this->denominator_, other.denominator_);
    return ((this->numerator_ * (res/this->denominator_)) == (other.numerator_ * (res / other.denominator_)));

}
bool Fraction::operator!=(Fraction& other) {
    return !(*this == other);
}
bool Fraction::operator>(Fraction& other) {
    int res = std::lcm(this->denominator_, other.denominator_);
    return ((this->numerator_ * (res / this->denominator_)) < (other.numerator_ * (res / other.denominator_)));
   
}
bool Fraction::operator<(Fraction& other) {
    return (other > *this);
}
bool Fraction::operator>=(Fraction& other) {
    return !(*this < other);
}
bool Fraction::operator<=(Fraction& other) {
    return !(*this > other);
}