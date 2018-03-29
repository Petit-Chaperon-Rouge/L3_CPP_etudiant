#include "Livre.hpp"

Livre::Livre() :
  _titre(""), _auteur(""), _annee(0)
{}  
  

Livre::Livre(const std::string& titre, const std::string& auteur, int annee) :
  _annee(annee)
{
  try {
    if((titre.find(';')!=std::string::npos) || (titre.find('\n')!=std::string::npos)) {
      throw std::string("Chaine de caractère non valide pour titre");
    }
    else
      _titre = titre;
    if((auteur.find(';')!=std::string::npos) || (auteur.find('\n')!=std::string::npos)) {
      throw std::string("Chaine de caractère non valide pour auteur");
    }
    else
      _auteur = auteur;
  }
  catch(std::string const& erreur) {
    std::cerr << erreur << std::endl;
  }
}

const std::string& Livre::getTitre() const {
  return _titre;
}

const std::string& Livre::getAuteur() const {
  return _auteur;
}

int Livre::getAnnee() const {
  return _annee;
}

bool Livre::operator<(const Livre& livre) const {
  if (_auteur < livre._auteur)
    return true;
  else {
    if (_titre < livre._titre and _auteur == livre._auteur)
      return true;
  }
  return false;
}

bool operator==(const Livre& livre1, const Livre& livre2) {
  return ((livre1._titre==livre2._titre) and (livre1._auteur==livre2._auteur) and (livre1._annee==livre2._annee));
}

std::ostream& operator<<(std::ostream& o, const Livre& livre) {
  o<<livre.getTitre()<<";"<<livre.getAuteur()<<";"<<livre.getAnnee();
  return o;
}

std::istream& operator>>(std::istream& i, Livre& livre) {
  std::getline(i, livre._titre);
  std::getline(i, livre._auteur);
  std::string annee;
  std::getline(i, annee);
  livre._annee = atoi(annee.c_str());

  return i;
}
