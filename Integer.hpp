#pragma once
class Integer
{
private:
    long long int number_;
    bool sign_;

public:
    Integer(const long long int number, const bool sign = 0);
    Integer operator ++();
    Integer operator ++(int);
    Integer operator --();
    Integer operator --(int);
    Integer operator *(const Integer other);
    Integer operator -(const Integer other);
    Integer operator +(const Integer other);
    Integer operator /(const Integer other);
    

};
