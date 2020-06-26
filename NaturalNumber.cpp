#include "NaturalNumber.hpp"
NaturalNumber::NaturalNumber(const long long number) : number_(number)
{
    if (number < 0)
    {
        number_ = 0;
    }
}
NaturalNumber NaturalNumber::operator++() //ok
{
    ++number_;
    return *this;
}
NaturalNumber NaturalNumber::operator++(int) //ok
{
    long long tmp = number_;
    ++tmp;
    return NaturalNumber(tmp);
}
NaturalNumber NaturalNumber::operator--() //ok
{
    if (number_ != 0)
    {
        --number_;
    }

    return *this;
}
NaturalNumber NaturalNumber::operator--(int) //ok
{
    if (number_ == 0)
    {
        return *this;
    }
    else
    {
        long long tmp = number_;
        --tmp;
        return NaturalNumber(tmp);
    }
}
int operator+(const NaturalNumber a, const int b)
{
    return (a.number_ + b);
}
int operator+(const int a,const NaturalNumber b)
{
    return (b.number_ + a);
}
float operator+(const NaturalNumber a, const float b)
{
    return (a.number_ + b);
}
float operator+(const float a,const NaturalNumber b)
{
    return (b.number_ + a);
}

//todo cast operators, mod operator
