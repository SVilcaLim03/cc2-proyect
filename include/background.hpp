class Background {
public:
  enum State { NEUTRAL };

private:
  State state_;

public:
  Background();
  ~Background();
  int GetState();
};
