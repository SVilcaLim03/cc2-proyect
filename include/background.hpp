#include "game_object.hpp"
class Background : public GameObject {
public:
  enum State { NEUTRAL };

private:
  State state_;

public:
  Background();
  ~Background();
  int GetState();
};
