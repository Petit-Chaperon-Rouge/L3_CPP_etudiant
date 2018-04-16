#include "Image.hpp"
#include <cmath>
#include <fstream>
#include <cstring>

Image::Image(int largeur, int hauteur) :
  _largeur(largeur), _hauteur(hauteur)
{
  _pixels = new int[_largeur*_hauteur];
}

Image::~Image() {
  delete[] _pixels;
}

Image::Image(const Image& image) {
  _largeur = image._largeur;
  _hauteur = image._hauteur;
  _pixels = new int[_largeur*_hauteur];
  std::memcpy(_pixels, image._pixels, _largeur*_hauteur*sizeof(int));
}

int Image::getLargeur() const {
  return _largeur;
}

int Image::getHauteur() const {
  return _hauteur;
}

/*
int Image::getPixel(int i, int j) const {
  return _pixels[i*j];
}

void setPixel(int i, int j, int couleur) {
  _pixels[i*j] = couleur;
}
*/

const int & Image::getPixel(int i, int j) const {
  return _pixels[_largeur*i+j];
}

int & Image::setPixel(int i, int j, int couleur) {
  return _pixels[_largeur*i+j] = couleur;
}

void Image::ecrirePnm(const std::string& nomFichier) {
  std::ofstream fichier(nomFichier, std::ofstream::out);
  if(!fichier)
    {
      throw std::string("erreur : Impossible d'écrire dans le fichier");
    }
 
  const int largeur = getLargeur();
  const int hauteur = getHauteur();
 
  fichier << "P2" << std::endl;
  fichier << largeur << " " << hauteur << std::endl;
  fichier << "255" << std::endl;
  for(int i = 0; i < hauteur; i++)
    {
      for(int j = 0; j < largeur; j++)
	{
	  fichier << getPixel(i, j) << " ";           
	}
      fichier << std::endl;
    }
}

void Image::remplir() {
  for(int i = 0; i <_hauteur; i++) {
    for(int j = 0; j <_largeur; j++) {
      double cosVal = ((std::cos((float)j / 20) + 1) / 2) * 255;
      setPixel(i, j, (int)cosVal);
    }
  }
}

void Image::bordure(int couleur, int epaisseur) {
  for(int i = 0; i < _hauteur; i++) {
    for(int j = 0; j < _largeur; j++) {
      if ((i <= epaisseur || i >= _hauteur-epaisseur) ||
	  (j <= epaisseur || j >= _largeur-epaisseur))
	setPixel(i, j, couleur);
    }
  }
}
