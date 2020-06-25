//Natural Numbers representation for moar typesafety
#pragma once
class NaturalNumber
{
private:
    unsigned long long int number_;

public:
    NaturalNumber(const long long int number);
    NaturalNumber operator++();
    NaturalNumber operator++(int);
    NaturalNumber operator--();
    NaturalNumber operator--(int);
    NaturalNumber operator*(const NaturalNumber other);
    NaturalNumber operator-(const NaturalNumber other);
    NaturalNumber operator+(const NaturalNumber other);
    NaturalNumber operator/(const NaturalNumber other);
};
