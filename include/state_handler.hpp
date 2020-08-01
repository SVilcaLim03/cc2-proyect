#include "button.hpp"
#include "renderable.hpp"
class StateHandler{
public:
StateHandler();
  ~StateHandler();
private:
  void NextSpriteUnit(Renderable &b);
};
