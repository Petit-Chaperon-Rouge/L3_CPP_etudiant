#ifndef INVENTAIRE_HPP_
#define INVENTAIRE_HPP_

#include "Bouteille.hpp"

#include <iostream>
#include <vector>

// Modèle : inventaire de bouteilles.
struct Inventaire {
  std::vector<Bouteille> _bouteilles;
};

/// Flux de sortie au format "<Bouteille>\n<Bouteille2>\n..."
std::ostream& operator <<(std::ostream& os, const Inventaire& inventaire);


#endif
