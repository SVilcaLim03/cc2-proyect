#pragma once

class GameObject {
public:
  GameObject();
  virtual int GetState() = 0;
  virtual ~GameObject();
};
