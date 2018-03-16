#include "Magasin.hpp"
#include <iostream>
#include <algorithm>

typedef std::vector<Client> Clients;
typedef std::vector<Produit> Produits;

Magasin::Magasin() {
  _idCourantClient = 0;
  _idCourantProduit = 0;
}

// Fonctions relatives aux Clients

int Magasin::nbClients() const {
  return _clients.size();
}

void Magasin::ajouterClient(const std::string& nom) {
  Client c(_idCourantClient, nom);
  _clients.push_back(c);
  _idCourantClient++;
}

void Magasin::afficherClients() const {
  Clients::const_iterator it;
  for (it = _clients.begin(); it!=_clients.end(); it++) {
    (*it).afficherClient();
  }
}

void Magasin::supprimerClient(int idClient) {
  Clients::iterator it;
  for (it = _clients.begin(); it!=_clients.end(); it++) {
    if (it->getId() == idClient) {
      std::swap((*it), _clients.back());
      _clients.pop_back();
      break;
    }
  }  
}


// Fonctions relatives aux Produits

int Magasin::nbProduits() const {
  return _produits.size();
}

void Magasin::ajouterProduit(const std::string& description) {
  Produit p(_idCourantProduit, description);
  _produits.push_back(p);
  _idCourantProduit++;
}

void Magasin::afficherProduits() const {
  Produits::const_iterator it;
  for (it = _produits.begin(); it!=_produits.end(); it++) {
    (*it).afficherProduit();
  }
}

void Magasin::supprimerProduit(int idProduit) {
  Produits::iterator it;
  for (it = _produits.begin(); it!=_produits.end(); it++) {
    if (it->getId() == idProduit) {
      std::swap((*it), _produits.back());
      _produits.pop_back();
      return;
    }
    throw std::string("Erreur : ce client n’existe pas");
  }  
}
