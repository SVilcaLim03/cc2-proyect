#include "date.hpp"
#include <iostream>

Date ::Date() {}

Date ::Date(NaturalNumber hour, NaturalNumber minute, NaturalNumber second) 
{
    second_ = second;
    minute_ = minute;
    hour_ = hour;

    raw_date_ = second + 60*(minute_) + 60*60*(hour);
}

NaturalNumber Date::GetRawDate()
{
    return raw_date_;
}

NaturalNumber Date::GetHour() 
{
    return hour_;
}

NaturalNumber Date::GetMinute() 
{
    return minute_;
}

NaturalNumber Date::GetSecond() 
{
    return second_;
}

Date::~Date() {}