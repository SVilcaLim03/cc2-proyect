#include "background.hpp"
Background::Background() : state_(NEUTRAL) {}

Background::~Background() {}

int Background::GetState() { return state_; }
