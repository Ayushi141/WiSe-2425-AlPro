#include <iostream>

#include <hanoi/hanoi.hpp>

int main(int, char**) {
  hanoi::Hanoi h(5);
  h.drucke();
  
  h.bewege(1,2);
  h.drucke();
  h.bewege(1,2); // Illegale Bewegung
  h.bewege(1,3);
  h.drucke();

  h.bewege(2,3);
  h.drucke();

  h.bewege(1,2);
  h.bewege(3,1);
  h.bewege(3,2);
  h.bewege(1,2);
  h.drucke();
}


/*
Build with clang++ -std=c++20 -I ./include src/hanoi.cpp examples/aufg2.cpp -o build/aufg2 
*/