#include "Image.hpp"
#include <iostream>

int main() {
  Image img(500, 400);
  Image img2(img);
  std::string fileName = "test_image";
  
  img.remplir();
  img.bordure(0, 20);
  img.ecrirePnm(fileName);
}
