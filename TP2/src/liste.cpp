#include "liste.hpp"

Noeud::Noeud(int valeur, Noeud* suivant) {
  _valeur = valeur;
  _suivant = suivant;
}

Liste::Liste() {
  _tete=nullptr;
}

void Liste::ajouterDevant(int valeur){
  Noeud* nouv = new Noeud(valeur, _tete);
  _tete = nouv;
}

int Liste::getTaille() const {
  Noeud* pointeur;
  pointeur = _tete;
  int i = 0;
  while(pointeur!=nullptr){
    i++;
    pointeur=pointeur->_suivant;
  }
  return i;
}

int Liste::getElement(int indice) const {
  Noeud* pointeur;
  pointeur = _tete;
  int i = 0;
  while(i!=indice){
    i++;
    pointeur=pointeur->_suivant;
  }
  return pointeur->_valeur;
}

Liste::~Liste() {
  Noeud* pointeur;
  pointeur = _tete;
  while(pointeur!=nullptr){
    Noeud* save = pointeur->_suivant;
    delete pointeur;
    pointeur=save;
  }
}
