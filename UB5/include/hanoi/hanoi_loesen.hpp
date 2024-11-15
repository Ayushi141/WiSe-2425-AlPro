#pragma once

#include <vector>
#include <cstddef>

namespace hanoi
{
  void loese(Hanoi &h);
  void verschiebe(Hanoi &h, size_t startturm, size_t hilfsturm, size_t zielturm, size_t n);
}
