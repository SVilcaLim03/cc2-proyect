#include <iostream>

#include "natural_number.hpp"
class Time {
 private:
  NaturalNumber abs_start_time_;
  NaturalNumber rel_start_time_;

 public:
  Time(NaturalNumber rel_start_time);
  Time(int rel_start_time);
  NaturalNumber GetCurrentTime();
  NaturalNumber GetElapsedTime();
  
};
