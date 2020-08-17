#pragma once
#include "observer.hpp"
class Observable {
public:
  Observable()=default;
  virtual ~Observable()=default;
  virtual void AddObserver(Observer *observer) = 0;
  virtual void RemoveObserver(Observer *observer) = 0;
  virtual void Notify() = 0;
};
