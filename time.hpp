#include <iostream>

#include "natural_number.hpp"
class Time {
 private:
  NaturalNumber abs_start_time_;
  NaturalNumber rel_start_time_;
  Time(NaturalNumber rel_start_time);
  Time(int rel_start_time);

 public:
  friend class Handler;

  NaturalNumber GetCurrentTime();
  NaturalNumber GetElapsedTime();
};
