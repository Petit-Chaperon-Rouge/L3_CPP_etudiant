#ifndef MAGASIN_HPP
#define MAGASIN_HPP

#include <vector>
#include <string>
#include "Client.hpp"
#include "Produit.hpp"
#include "Location.hpp"

class Magasin {
private :
  std::vector<Client> _clients;
  std::vector<Produit> _produits;
  std::vector<Location> _locations;
  int _idCourantClient;
  int _idCourantProduit;

public :
  Magasin();
  
  int nbClients() const;
  void ajouterClient(const std::string& nom);
  void afficherClients() const;
  void supprimerClient(int idClient);

  int nbProduits() const;
  void ajouterProduit(const std::string& description);
  void afficherProduits() const;
  void supprimerProduit(int idProduit);
};

#endif