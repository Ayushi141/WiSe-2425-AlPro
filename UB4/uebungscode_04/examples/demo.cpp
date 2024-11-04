#include <iostream>
#include "../include/meine_funktionen.hpp"

int main() {
  // Hier Sinus, Kosius, usw für einige Werte ausrechnen
  // und Ergebnisse ausdrucken
  double x = 0.66;
  std::cout << sinus(x) << std::endl;
  std::cout << kosinus(x) << std::endl;
  std::cout << tangens(x) << std::endl;
  std::cout << kotangens(x) << std::endl;
}
