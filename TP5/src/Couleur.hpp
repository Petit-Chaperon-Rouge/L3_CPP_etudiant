#ifndef COULEUR_HPP
#define COULEUR_HPP

class Couleur {
private :
  double _r;
  double _g;
  double _b;

public :
  Couleur(int r, int g, int b);
  void afficher() const;
};

#endif
