#include "../include/natural_number.hpp"

#include <iostream>

//constructors
NaturalNumber::NaturalNumber(const long long int number) : number_(number) {
  if (number < 0) {
    number_ = 0;
  }
}
//casting operators
NaturalNumber::operator int() const { return (int)number_; }

//Unary operators
NaturalNumber NaturalNumber::operator++() {
  ++number_;
  return *this;
}

NaturalNumber NaturalNumber::operator++(int) {
  long long tmp = number_;
  ++tmp;
  return NaturalNumber(tmp);
}

NaturalNumber NaturalNumber::operator--() {
  if (number_ != 0) {
    --number_;
  }
  return *this;
}

NaturalNumber NaturalNumber::operator--(int) {
  if (number_ == 0) {
    return *this;
  } else {
    long long tmp = number_;
    --tmp;
    return NaturalNumber(tmp);
  }
}
//Asignement Operators
NaturalNumber& NaturalNumber::operator+=(const NaturalNumber& other) {
  number_ += other.number_;
  return *this;
}

NaturalNumber& NaturalNumber::operator*=(const NaturalNumber& other) {
  number_ *= other.number_;
  return *this;
}

NaturalNumber& NaturalNumber::operator/=(const NaturalNumber& other) {
  number_ /= other.number_;
  return *this;
}

NaturalNumber& NaturalNumber::operator-=(const NaturalNumber& other) {
  number_ -= other.number_;
  return *this;
}

NaturalNumber& NaturalNumber::operator%=(const NaturalNumber& other) {
  number_ %= other.number_;
  return *this;
}

std::ostream& operator<<(std::ostream& ostream, const NaturalNumber& obj) {
  ostream << obj.number_;
  return ostream;
}
//Binary Operators
NaturalNumber operator+(NaturalNumber a, const NaturalNumber& b) {
  a += b;
  return a;
}

NaturalNumber operator*(NaturalNumber a, const NaturalNumber& b) {
  a *= b;
  return a;
}

NaturalNumber operator-(NaturalNumber a, const NaturalNumber& b) {
  a -= b;
  return a;
}

NaturalNumber operator%(NaturalNumber a, const NaturalNumber& b) {
  a %= b;
  return a;
}

int operator+(const NaturalNumber a, const int b) { return (a.number_ + b); }

int operator+(const int a, const NaturalNumber b) { return (b.number_ + a); }

long int operator+(const NaturalNumber a, const long int b) {
  return (a.number_ + b);
}

long int operator+(const long int a, const NaturalNumber b) {
  return (b.number_ + a);
}

double operator+(const NaturalNumber a, const double b) {
  return (a.number_ + b);
}

double operator+(const double a, const NaturalNumber b) {
  return (b.number_ + a);
}

float operator+(const NaturalNumber a, const float b) {
  return (a.number_ + b);
}

float operator+(const float a, const NaturalNumber b) {
  return (b.number_ + a);
}

// todo cast operators, mod operator
