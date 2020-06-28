#include <ctime>
#include "time.hpp"
#include "natural_number.hpp"
Time::Time(int rel_start_time){
  abs_start_time_= NaturalNumber((int)time(nullptr));
  rel_start_time_= NaturalNumber(rel_start_time);
}
