#include "../include/time.hpp"

#include <ctime>

#include "../include/natural_number.hpp"
Time::Time(NaturalNumber rel_start_time) {
  abs_start_time_ = NaturalNumber((int)time(nullptr));
  rel_start_time_ = rel_start_time;
}
Time::Time(int rel_start_time) {
  abs_start_time_ = NaturalNumber((int)time(nullptr));
  rel_start_time_ = NaturalNumber(rel_start_time);
}
NaturalNumber Time::GetCurrentTime() {
  NaturalNumber current_time=(int)time(nullptr);;

  return current_time;
}
