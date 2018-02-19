#include "liste.hpp"

int main() {

  // Pointeurs et allocation dynamique
  int a;
  a = 42;
  std::cout << a << std::endl;
  int* p;
  p = &a;
  *p = 37;
  std::cout << a << std::endl;

  int* t;
  t = new int[10];
  t[2] = 42;
  delete[] t;
  
  // Analyse des fuites mémoires
  Liste test;
  test.ajouterDevant(13);
  test.ajouterDevant(37);

  for (int i=0; i<test.getTaille(); i++) {
    std::cout << test.getElement(i) << std::endl;
  }
  
  return 0;
}
