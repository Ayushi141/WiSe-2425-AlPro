#include <iostream>

#include <hanoi/hanoi.hpp>
#include <hanoi/hanoi_loesen.hpp>

int main(int, char **)
{
  hanoi::Hanoi h(8);
  loese(h);
  h.drucke();
}


/*
Build with clang++ -std=c++20 -I ./include src/hanoi_loesen.cpp src/hanoi.cpp examples/aufg3.cpp -o build/aufg3
*/