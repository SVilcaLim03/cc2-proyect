#pragma once

class Object {
 protected:
  friend class Space;
  Object();
  virtual bool Render() = 0;
  virtual ~Object() = 0;
};