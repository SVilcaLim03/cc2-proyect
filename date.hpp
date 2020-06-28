
#pragma once
#include <iostream>

#include "natural_number.hpp"

class Date {
 private:
  NaturalNumber hour_;
  NaturalNumber minute_;
  NaturalNumber second_;
  NaturalNumber raw_date_;

 public:
  NaturalNumber GetRawDate();
  NaturalNumber GetHour();
  NaturalNumber GetMinute();
  NaturalNumber GetSecond();
  Date(NaturalNumber hour, NaturalNumber minute, NaturalNumber second);
  Date();
  ~Date();
};