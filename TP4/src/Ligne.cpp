#include "Ligne.hpp"
#include <iostream>

Ligne::Ligne(const Couleur& couleur, const Point& p0, const Point& p1) :
  FigureGeometrique(couleur), _p0(p0), _p1(p1)
{}

void Ligne::afficher() const {
  std::cout << "Ligne ";
  _couleur.afficher();
  std::cout << " ";
  _p0.afficher();
  std::cout << " ";
  _p1.afficher();
  std::cout << std::endl;
}

const Point& Ligne::getP0() const {
  return _p0;
}

const Point& Ligne::getP1() const {
  return _p1;
}
