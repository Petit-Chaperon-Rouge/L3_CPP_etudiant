#ifndef POINT_HPP
#define POINT_HPP

class Point {
public :
  int _x;
  int _y;
Point() : _x(0), _y(0){}
Point(int x, int y);
void afficher() const;
};

#endif
