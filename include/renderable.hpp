class Renderable {
protected:
  Renderable();
  virtual ~Renderable();
  virtual void Render() = 0;
};
