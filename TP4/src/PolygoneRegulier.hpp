#ifndef POLREG_HPP
#define POLREG_HPP

#include "Point.hpp"
#include "FigureGeometrique.hpp"

class PolygoneRegulier : public FigureGeometrique {
private :
  int _nbPoints;
  Point* _points;

public :
  PolygoneRegulier(const Couleur& couleur, const Point& centre, int rayon, int nbCote);
  void afficher() const;
  int getNbPoints() const;
  const Point& getPoint(int indice) const;
};

#endif
