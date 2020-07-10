#include <iostream>

class Time {
 private:
  int abs_start_time_;
  int rel_start_time_;
  Time(int rel_start_time);

 public:
  friend class Handler;

  int GetCurrentTime();
  int GetElapsedTime();
};
