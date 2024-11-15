#include <minsort_in_place.hpp>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <iostream>
#include <iomanip>

//
// Hilfsfunktionen die wir nur für diese Demo benutzen
//

// Die Funktion befüllt ein Array mit zufälligen Zahlen
void fuelle_zufaellig(std::vector<int>& in) {
  // Konfiguriere den Zufallszahlengenerator
  std::srand(unsigned(std::time(nullptr)));
  // Erstelle ein Funktionsobjekt welches Zufallszahlen zwischen 0 und 10000 generiert
  std::function<size_t(void)> zufallsgenerator = [] (void) -> size_t { return std::rand() % 10000; };
  // Befülle das Array mithilfe des Funktionsobjekts
  std::generate(in.begin(), in.end(), zufallsgenerator);
}

// Die Funktion druckt ein Array aus
void drucke_array(const std::vector<int>& in) {
  for(const int& zahl: in) {
    std::cout << std::setw(5) << zahl;
  }
  std::cout << std::endl;
}

void min_sort_in_place(std::vector<int>& zahlen) {
  /*
  Diese Funktion bekommt als Input ein Array und gibt als Output ein Array 
  mit Zahlen sortiert in aufsteigender Reihenfolge.
  */
  
  // Gehe alle Indizes von 0 bis n im Array durch
  for (size_t i = 0; i < zahlen.size(); i++) {
    // Finde die Reference des aktuell kleinsten Elementes von i bis n    
    int& aktuellesMinRef = find_minimal_int(zahlen, i, zahlen.size());
    int& aktuellerPlatzRef = zahlen[i];
    // temp hält temporär den Wert von dem aktuell zu besetzenden Element
    int temp = aktuellerPlatzRef;
    // Wir tauschen das aktuelle Minimum mit dem zu besetzenden Element
    aktuellerPlatzRef = aktuellesMinRef;
    aktuellesMinRef = temp;
  }
  return;
}

int& find_minimal_int(std::vector<int>& zahlen, const int from, const int to) {
  /* 
  Diese Funktion bekommt als Input ein Array und gibt als Output die Reference 
  zu der kleinsten Zahl im Suchbereich [bis;to) aus.  
  */

  // Eine Menge von sanity checks
  if (from < 0 || from >= zahlen.size()) {
    throw std::invalid_argument("Parameter from is out of bounds");
  }

  if (to < 0 || to > zahlen.size()) {
    throw std::invalid_argument("Parameter to is out of bounds");
  }

  if (from > to) {
    throw std::invalid_argument("Parameter from is greater than parameter to");
  }

  // Initialisiere Platzhalter-Variable mit dem Index des aktuellen Minimums
  int minPos = from;

  // Iteriere über die Einträge im Array
  for (int i = from; i < to; i++) {
    // Vergleiche die Zahl mit dem aktuell kleinstem Element, ersetze das alte Minimum durch den Index der kleineren Zahl
    if (zahlen[i] < zahlen[minPos]) {
      // Falls der Wert kleiner ist, so haben wir ein neues Minimum gefunden
      minPos = i;
    }
  }

  return zahlen[minPos];
}

int main() {
  std::vector<int> bsp_zahlen(100);
  fuelle_zufaellig(bsp_zahlen);
  // std::vector<int> bsp_zahlen = {1,6,7,3,8,0,6};
  min_sort_in_place(bsp_zahlen);
  drucke_array(bsp_zahlen);
}
