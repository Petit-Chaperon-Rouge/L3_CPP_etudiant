#include "PolygoneRegulier.hpp"
#include <iostream>
#include <cmath>

PolygoneRegulier::PolygoneRegulier(const Couleur& couleur, const Point& centre, int rayon, int nbCote) :
  FigureGeometrique(couleur), _nbPoints(nbCote)
{
  _points = new Point[nbCote];
  for (int i = 0; i < _nbPoints; i++ ) {
    _points[i]._x=centre._x + rayon*std::cos(3.14/_nbPoints); 
    _points[i]._y=centre._y + rayon*std::sin(3.14/_nbPoints);
  }
}

void PolygoneRegulier::afficher() const {
  _couleur.afficher();
  for (int i = 0; i < _nbPoints; i++) {
    std::cout << " ";
    _points[i].afficher();
  }
}

int PolygoneRegulier::getNbPoints() const {
  return _nbPoints;
}

const Point& PolygoneRegulier::getPoint(int indice) const {
  return _points[indice];
}
