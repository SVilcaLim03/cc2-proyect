#include "button.hpp"
#include "location.hpp"
#include "mouse_input.hpp"
#include "observable.hpp"
class ButtonObserver : public Observer {
private:
  MouseInput *observable_;
  Button *button_;
  Location *location_;

public:
  ButtonObserver();
  ~ButtonObserver() = default;
  void SetLocation(Location *&location);
  void SetObservable(Observable *&observable);
  void Update();
};
