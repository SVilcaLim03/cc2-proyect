#include "object.hpp"
class Background : public Object {
public:
  enum State { NEUTRAL };

private:
  State state_;

public:
  Background();
  ~Background();
  int GetState();
};
