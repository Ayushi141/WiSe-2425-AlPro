#include <meine_sortierverfahren.hpp>
#include <vector>
#include <iostream>
// Hier wird mergesort implementiert

std::vector<int> merge(std::vector<int> left, std::vector<int> right) {
    std::vector<int> sorted(left.size()+right.size());
    size_t i = 0, j = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            sorted[i+j]=left[i];
            i++;
        } else {
            sorted[i+j]=right[j];
            j++;
        }
    }
    while (i < left.size()) {
        sorted[i+j] = left[i];
        i++;
    }
    while(j < right.size()) {
        sorted[i+j] = right[j];
        j++;
    }
    return sorted;
}

std::vector<int> merge_sort(std::vector<int> array) {
    if (array.size() > 1) {
        size_t t = (array.size()+1) / 2; // Das Produkt der Division von zwei unsigned ints wird abgerundet, also addiere +1, um aufzurunden.
        std::vector<int> left(array.begin(), array.begin()+t); // Muss Iterator nutzen, sonst falscher Konstruktor aufgerufen.
        std::vector<int> right(array.begin()+t,array.end());
        std::vector<int> left_sorted = merge_sort(left);
        std::vector<int> right_sorted = merge_sort(right);
        return merge(left_sorted,right_sorted);
    } 
    return array;
}

// Hier wird minsort (in place) implementiert

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