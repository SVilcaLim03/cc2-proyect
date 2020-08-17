#pragma once
#include "observable.hpp"
#include <forward_list>
#include <utility>
class MouseInput : public Observable {
public:
  enum Action { CLICK, NEUTRAL };

private:
  std::forward_list<Observer *> observers_;
  std::pair<Action, std::pair<int, int>> event_;

public:
  // click, neutral, position
  MouseInput();
  ~MouseInput();
  void RegisterObserver(Observer *observer);
  void RemoveObserver(Observer *observer);
  void Notify();
  std::pair<MouseInput::Action, std::pair<int, int>> GetEvent();
};
