#include "Couleur.hpp"
#include <iostream>

Couleur::Couleur(int r, int g, int b) :
  _r(r), _g(g), _b(b)
{}

void Couleur::afficher() const {
  std::cout << _r << "_" << _g << "_" << _b;
}
