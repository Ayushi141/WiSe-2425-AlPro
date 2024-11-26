#include <misc/zeitmesser.hpp>
#include <misc/schnellsort.hpp>
#include <misc/hilfsfunktionen.hpp>
#include <meine_sortierverfahren.hpp>
#include <iostream>
#include <algorithm>


int main() {
  std::vector<int> bsp_zahlen(10000);
  misc::fuelle_zufaellig(bsp_zahlen);
  misc::Zeitmesser timer;
  timer.start();
  misc::schnellsort(bsp_zahlen);
  timer.stop();
  std::cout << "Schnellsort: " << timer.get_milliseconds() << std::endl;

  misc::fuelle_zufaellig(bsp_zahlen);
  misc::Zeitmesser timer2;
  timer2.start();
  merge_sort(bsp_zahlen);
  timer2.stop();
  std::cout << "Mergesort: " << timer2.get_milliseconds() << std::endl;

  misc::fuelle_zufaellig(bsp_zahlen);
  misc::Zeitmesser timer3;
  timer3.start();
  min_sort_in_place(bsp_zahlen);
  timer3.stop();
  std::cout << "Minsort: " << timer3.get_milliseconds() << std::endl;
}

/* 
Minsort Speicheraufwand O(1) --- wir brauchen Speicher nur um den Wert des aktuell zu besetzenden Elements zu speichern. Er bleibt konstant unabhängig von der Größe des Arrays. Ist also eine endliche Konstatne zu der wir immer unabhängig von n eine noch größere Konstante finden können.
Minsort Laufzeitaufwand O(n²) --- um das Minimum zu finden muss man alle Zahlen rechts vergleichen. Das heißt n+(n-1)+...+1 = 1/2 (n²-n) -> O(n²).
*/