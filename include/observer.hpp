#pragma once
class Observer{
public:
  Observer();
  virtual ~Observer();
  virtual void Update()=0;
  virtual void AddObservable()=0;
};
