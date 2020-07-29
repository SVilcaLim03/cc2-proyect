#pragma once
#include <utility>
class Entity {
protected:
  using Location = std::pair<int, int>;

protected:
  int id_;

  virtual void Move(Location location) = 0;
  virtual bool Decide() = 0;
  // void GenerateIdentifier();
};
