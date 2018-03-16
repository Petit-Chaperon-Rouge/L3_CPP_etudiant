#include "PolygoneRegulier.hpp"
#include <iostream>
#include <cmath>

PolygoneRegulier::PolygoneRegulier(const Couleur& couleur, const Point& centre, int rayon, int nbCote) :
  FigureGeometrique(couleur), _nbPoints(nbCote)
{
  _points = new Point[nbCote];
  for (int i = 0; i < _nbPoints; i++ ) {
    _points[i]._x=centre._x + rayon*std::cos(3.14/_nbPoints)*i; 
    _points[i]._y=centre._y + rayon*std::sin(3.14/_nbPoints)*i;
  }
}

void PolygoneRegulier::afficher(const Cairo::RefPtr<Cairo::Context>& context) const {

  context->set_source_rgb(1.0, 0.0, 0.0);
  context->set_line_width(10.0);

  context->move_to(_points[0]._x, _points[0]._y);

  _couleur.afficher();
  for (int i = 0; i < _nbPoints; i++) {
    std::cout << " ";
    _points[i].afficher();
    context->line_to(_points[i]._x, _points[i]._y);
  }

  context->stroke();
}

int PolygoneRegulier::getNbPoints() const {
  return _nbPoints;
}

const Point& PolygoneRegulier::getPoint(int indice) const {
  return _points[indice];
}
