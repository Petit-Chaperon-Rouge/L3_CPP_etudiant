#include "Bibliotheque.hpp"
#include <iostream>
#include <algorithm>

void Bibliotheque::afficher() const {
  for(const_iterator it = begin(); it != end(); ++it) {
    std::cout << *it << std::endl;
  }
}

void Bibliotheque::trierParAuteurEtTitre() {
  std::sort(begin(), end(), *this);
}

void Bibliotheque::trierParAnnee() {
  auto fct = [](const Livre& l1, const Livre& l2)
    {
      return l1.getAnnee()<l2.getAnnee();
    };
  
  std::sort(begin(), end(), fct);
}

bool Bibliotheque::operator()(const Livre& livre1, const Livre& livre2) const {
  return livre1 < livre2;
}
