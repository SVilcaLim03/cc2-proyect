#include <iostream>

#include "natural_number.hpp"
class Time {
 private:
  unsigned int abs_start_time_;
  unsigned int rel_start_time_;

 public:
  NaturalNumber (const abs_start_time);
  NaturalNumber (const rel_start_time);
  NaturalNumber GetCurrentTime();
  NaturalNumber GetElapsedTime();
  NaturalNumber Tiempo(int rel_start_time);
  NaturalNumber Tiempo(int rel_start_time);
  NaturalNumber Tiempo();

};
