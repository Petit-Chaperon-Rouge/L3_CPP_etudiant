#include "Image.hpp"

Image::Image(int largeur, int hauteur) :
  _largeur(largeur), _hauteur(hauteur)
{
  _pixels = new int[_largeur*_hauteur];
}

Image::~Image() {
  delete[] _pixels;
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
  return _pixels[i*j];
}

int & Image::setPixel(int i, int j, int couleur) {
  return _pixels[i*j] = couleur;
}

/*
void Image::remplir(Image& img) {
  
}
*/
