#pragma once
class Observable;
class Observer {
public:
  Observer() = default;
  virtual ~Observer() = default;
  virtual void Update() = 0;
  virtual void SetObservable(Observable *&observable)=0;
};
