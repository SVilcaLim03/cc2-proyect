#include "date.hpp"
#include "natural_number.hpp"
#include <iostream>

Date ::Date() {}
Date ::Date(NaturalNumber hour, NaturalNumber minute, NaturalNumber second) {}
NaturalNumber Date::GetRawDate() {}
NaturalNumber Date::GetHour() {}
NaturalNumber Date::GetMinute() {}
NaturalNumber Date::GetSecond() {}