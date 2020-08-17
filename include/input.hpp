#include "observable.hpp"
class Input : public Observable {
private:

public:
  Input();
  ~Input();
  void AddObserver(Observer *observer);
  void RemoveObserver(Observer *observer);
  void Notify();
};
