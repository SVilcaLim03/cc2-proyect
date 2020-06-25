#include "NaturalNumber.hpp"
NaturalNumber::NaturalNumber(const long long int number, const bool sign) : sign_(sign), number_(number)
{
    if (sign and number < 0)
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
    if (number_ == 0 and sign_)
    {
    }
    else
    {
        --number_;
    }

    return *this;
}
NaturalNumber NaturalNumber::operator--(int) //ok
{
    if (number_ == 0 and sign_)
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