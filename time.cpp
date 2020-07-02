#include <ctime>
#include "time.hpp"
#include "natural_number.hpp"
Time::Time(NaturalNumber rel_start_time){
  abs_start_time_= NaturalNumber((int)time(nullptr));
  rel_start_time_= rel_start_time;  
}
Time::Time(int rel_start_time){
  abs_start_time_= NaturalNumber((int)time(nullptr));
  rel_start_time_= NaturalNumber(rel_start_time);
}
NaturalNumber GetCurrentTime()
 {   
   time_t curr_time;
   struct tm * time_info;
   char timeString[9];
 
   time(&curr_time);
   time_info = localtime(&curr_time);
 
   strftime(timeString, sizeof(timeString), "%H:%M:%S", time_info);
   puts(timeString);
   return 0;
}
//se viene la suicidacion :'v 

