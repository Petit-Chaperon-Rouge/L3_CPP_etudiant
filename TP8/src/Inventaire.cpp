#include "Inventaire.hpp"

std::ostream& operator <<(std::ostream& os, const Inventaire& inventaire){
  for(unsigned int i = 0; i<inventaire._bouteilles.size(); i++) {
    os << inventaire._bouteilles[i];
  }
  return os;
}

