#pragma once
#include <utility>
class Location {
private:
  friend class GameObject;
  int x_;
  int y_;

private:
  Location() = delete;
  Location(int x, int y);

public:
  ~Location() = default;
  std::pair<int, int> GetPosititon();
  int GetX();
  int GetY();
  void ChangePosition(std::pair<int, int> &&vector);
};
