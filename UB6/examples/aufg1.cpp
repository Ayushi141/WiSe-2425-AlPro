#include <meine_sortierverfahren.hpp>
#include <misc/hilfsfunktionen.hpp>
#include <vector>
#include <iostream>

int main() {
  std::vector<int> bsp_zahlen(100);
  misc::fuelle_zufaellig(bsp_zahlen);
  std::vector<int> bsp_zahlen_sorted = merge_sort(bsp_zahlen);
  misc::drucke_array(bsp_zahlen_sorted);
}
