#pragma once
#include <iostream>

#include "natural_number.cpp"

class Date {
 private:
  NaturalNumber number_, minute_, second_, raw_date_;

 public:
  NaturalNumber GetRawDate();
  NaturalNumber GetHour();
  NaturalNumber GetMinute();
  NaturalNumber GetSecond();
  Date(NaturalNumber hour, NaturalNumber minute, NaturalNumber second);
  Date();
  ~Date();
};