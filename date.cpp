#include "date.hpp"

#include "natural_number.hpp"
#include "time.hpp"

Date::Date() : second_(0), minute_(0), hour_(0), raw_date_(0) {}
Date::~Date() {}

Date::Date(Time& time) {
  raw_date_ = time.GetCurrentTime();
  NaturalNumber divider(60);
  second_ = raw_date_ % divider;
  divider *= divider;
  minute_ = raw_date_ % divider;
  divider *= divider;
  hour_ = raw_date_ % divider;
}

Date::Date(NaturalNumber hour, NaturalNumber minute, NaturalNumber second)
    : second_(second), minute_(minute), hour_(hour) {
  const NaturalNumber x(60);
  raw_date_ = second + x * (minute_) + x * x * (hour);
}

NaturalNumber Date::GetRawDate() { return raw_date_; }
NaturalNumber Date::GetHour() { return hour_; }
NaturalNumber Date::GetMinute() { return minute_; }
NaturalNumber Date::GetSecond() { return second_; }