#include "Point.hpp"
#include <iostream>

Point::Point(int x, int y) :
  _x(x), _y(y)
{}

void Point::afficher() const {
  std::cout << _x << "_" << _y;
}
