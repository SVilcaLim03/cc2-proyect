#pragma once
#include "observer.hpp"
class Observable {
public:
  Observable();
  virtual ~Observable();
  virtual void AddObserver(Observer *observer) = 0;
  virtual void RemoveObserver(Observer *observer) = 0;
  virtual void Notify() = 0;
};
