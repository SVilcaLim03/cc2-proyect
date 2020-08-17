#include "location.hpp"
Location::Location(int x, int y) : x_(x), y_(y) {}
std::pair<int, int> Location::GetPosititon() { return std::make_pair(x_, y_); }
void Location::ChangePosition(std::pair<int, int> &&vector) {
  x_ += vector.first;
  y_ += vector.second;
}
