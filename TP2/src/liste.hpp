#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>

struct Noeud {
  int _valeur;
  Noeud* _suivant;

  Noeud(int valeur, Noeud* suivant);
};

struct Liste {
  Noeud* _tete;

  Liste();
  ~Liste();
  void ajouterDevant(int valeur);
  int getTaille() const;
  int getElement(int indice) const;
};

#endif
