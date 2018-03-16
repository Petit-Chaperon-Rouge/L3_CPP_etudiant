#include <iostream>

#include "Point.hpp"
#include "Couleur.hpp"
#include "FigureGeometrique.hpp"
#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"

int main() {
  Couleur c(1, 0, 0);
  Point p0(100, 200);
  Point p1(200, 100);
  Point p2(300, 150);
  FigureGeometrique fg(c);
  Ligne l(c, p0, p1);
  PolygoneRegulier pg(c, p2, 50, 3);

  l.afficher();
  pg.afficher();
}
