#ifndef FIGEO_HPP
#define FIGEO_HPP

#include "Couleur.hpp"
#include <gtkmm.h>

class FigureGeometrique {
protected :
  Couleur _couleur;

public :
  FigureGeometrique(const Couleur& couleur);
  const Couleur& getCouleur() const;
  virtual void afficher(const Cairo::RefPtr<Cairo::Context>& context) const = 0;
};

#endif
