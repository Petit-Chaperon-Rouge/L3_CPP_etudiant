#include "Controleur.hpp"

#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>

Controleur::Controleur(int argc, char ** argv) {
  //chargerInventaire("un_nom");
    _vues.push_back(std::make_unique<VueConsole>(*this));
    _vues.push_back(std::make_unique<VueGraphique>(argc, argv, *this));
}

std::string Controleur::getTexte() {
  std::ostringstream str;
  str << _inventaire;
  return str.str();
}

void Controleur::chargerInventaire(const std::string& nomFichier) {
  _inventaire._bouteilles.push_back(Bouteille{"Rince Cochon", "2012-12-12", 0.25});
  actualiser();
}


void Controleur::run() {
  for (auto & v : _vues)
    v->run();
}

void Controleur::actualiser() {
  for (auto & v : _vues)
    v->actualiser();
}

