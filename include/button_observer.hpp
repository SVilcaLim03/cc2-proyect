#include "animation.hpp"
#include "button.hpp"
#include "location.hpp"
#include "mouse_input.hpp"
#include "observable.hpp"
#include "utils.hpp"
class ButtonObserver : public Observer {
private:
  MouseInput *observable_;
  Button *button_;
  Location *location_;
  Animation *animation_;

public:
  ButtonObserver(Location *&location, Animation *&animation);
  ~ButtonObserver() = default;
  void SetObservable(Observable *&observable);
  void Update();
};
