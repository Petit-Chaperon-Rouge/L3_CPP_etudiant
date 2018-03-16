#include "Produit.hpp"
#include "Client.hpp"
#include "Location.hpp"
#include "Magasin.hpp"

int main() {
  std::string description = "un produit";
  std::string description2 = "deux produit";
  std::string description3 = "trois produit";
  std::string nom = "toto";
  std::string nom2 = "tata";
  std::string nom3 = "tutu";
  
  Produit p(1, description);
  p.afficherProduit();

  Client c(17, nom);
  c.afficherClient();

  Location l(17, 1);
  l.afficherLocation();

  Magasin m;
  m.ajouterClient(nom);
  m.ajouterClient(nom2);
  m.ajouterClient(nom3);
  m.afficherClients();
  m.supprimerClient(1);
  m.afficherClients();
  
  m.ajouterProduit(description);
  m.ajouterProduit(description2);
  m.ajouterProduit(description3);
  m.afficherProduits();
  m.supprimerProduit(1);
  m.afficherProduits();
}
