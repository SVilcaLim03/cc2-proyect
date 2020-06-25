#pragma once
class NaturalNumber
{
private:
    long long int number_;
    bool sign_;

public:
    NaturalNumber(const long long int number, const bool sign = 0);
    NaturalNumber operator ++();
    NaturalNumber operator ++(int);
    NaturalNumber operator --();
    NaturalNumber operator --(int);
    NaturalNumber operator *(const NaturalNumber other);
    NaturalNumber operator -(const NaturalNumber other);
    NaturalNumber operator +(const NaturalNumber other);
    NaturalNumber operator /(const NaturalNumber other);
    

};
