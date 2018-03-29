#ifndef BIBLI_HPP
#define BIBLI_HPP

#include <string>
#include <vector>
#include "Livre.hpp"

class Bibliotheque : public std::vector<Livre> {
public :
  void afficher() const;
  void trierParAuteurEtTitre();
  void trierParAnnee();
  void lireFichier(const std::string& nomFichier);
  void ecrireFichier(const std::string& nomFichier) const;
  virtual bool operator()(const Livre& livre1, const Livre& livre2) const;
};

#endif
