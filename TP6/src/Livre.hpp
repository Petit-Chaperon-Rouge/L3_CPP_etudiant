#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>
#include <iostream>

class Livre {
private :
  std::string _titre;
  std::string _auteur;
  int _annee;

public :
  Livre();
  Livre(const std::string& titre, const std::string& auteur, int annee);
  const std::string& getTitre() const;
  const std::string& getAuteur() const;
  int getAnnee() const;
  virtual bool operator<(const Livre& livre) const;
  friend bool operator==(const Livre& livre1, const Livre& livre2);
  friend std::istream& operator>>(std::istream& i, Livre& livre);
};

bool operator==(const Livre& livre1, const Livre& livre2);
std::ostream& operator<<(std::ostream& o, const Livre& livre);
std::istream& operator>>(std::istream& i, Livre& livre);

#endif

