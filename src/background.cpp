#include "background.hpp"
Background::Background() : state_(Background::NEUTRAL) {}

Background::~Background() {}

int Background::GetState() { return state_; }
