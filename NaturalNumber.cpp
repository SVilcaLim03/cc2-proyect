#include "NaturalNumber.hpp"
NaturalNumber::NaturalNumber(const long long int number) : number_(number)
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
    long long int tmp = number_;
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
    if (number_ == 0 )
    {
        return *this;
    }
    else
    {
        long long int tmp = number_;
        --tmp;
        return NaturalNumber(tmp);
    }
}
NaturalNumber NaturalNumber::operator*(const NaturalNumber other)
{
    return number_ * other.number_;
}
NaturalNumber NaturalNumber::operator-(const NaturalNumber other)
{
    return number_ - other.number_;
}
NaturalNumber NaturalNumber::operator+(const NaturalNumber other)
{
    return number_ + other.number_;
}
NaturalNumber NaturalNumber::operator/(const NaturalNumber other)
{
    return number_ / other.number_;
}