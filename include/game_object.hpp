#pragma once
class GameObject{
public:
  enum State:int;
  GameObject();
  virtual ~GameObject()=0;
};
