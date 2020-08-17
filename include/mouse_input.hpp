#pragma once
#include "observable.hpp"
#include <SDL2/SDL.h>
#include <forward_list>
#include <utility>
class MouseInput : public Observable {
public:
  enum Action { CLICK, NEUTRAL };
  friend class InputHandler;

private:
  std::forward_list<Observer *> observers_{};
  std::pair<Action, std::pair<int, int>> event_{};
  MouseInput() = default;

public:
  ~MouseInput() = default;
  void AddObserver(Observer *observer);
  void RemoveObserver(Observer *observer);
  void Notify();
  std::pair<MouseInput::Action, std::pair<int, int>> GetEvent();
};
