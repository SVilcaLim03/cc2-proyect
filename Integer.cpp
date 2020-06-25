#include "Integer.hpp"
Integer::Integer(const long long int number, const bool sign) : sign_(sign), number_(number)
{
    if (sign and number < 0)
    {
        number_ = 0;
    }
}
Integer Integer::operator++()
{
    ++number_;
    return *this;
}
Integer Integer::operator++(int)
{
    long long int tmp = number_;
    ++tmp;
    return Integer(tmp);
}
Integer Integer::operator--()
{
    --number_;
    return *this;
}
Integer Integer::operator--(int)
{
    long long int tmp = number_;
    --tmp;
    return Integer(tmp);
}
Integer Integer::operator*(const Integer other)
{
    return number_ * other.number_;
}
Integer Integer::operator-(const Integer other)
{
    return number_ - other.number_;
}
Integer Integer::operator+(const Integer other)
{
    return number_ + other.number_;
}
Integer Integer::operator/(const Integer other)
{
    return number_ / other.number_;
}