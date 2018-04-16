#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <string>

class Image { 
private :
  int _largeur;
  int _hauteur;
  int* _pixels;

public :
  Image(int largeur, int hauteur);
  ~Image();
  Image(const Image& image);
  int getLargeur() const;
  int getHauteur() const;
  /*
  int getPixel(int i, int j) const;
  void setPixel(int i, int j, int couleur);
  */
  const int& getPixel(int i, int j) const;
  int& setPixel(int i, int j, int couleur);
  void remplir();
  void ecrirePnm(const std::string& nomFichier);
  void bordure(int couleur, int epaisseur);
};

#endif
