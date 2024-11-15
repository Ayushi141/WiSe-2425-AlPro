#include <hanoi/hanoi.hpp>

#include <iostream>

namespace hanoi
{
  // Verschiebt rekursiv n Scheiben von startturm zum hilfsturm mit Hilfe von hilfsturm
  void verschiebe(Hanoi &h, size_t startturm, size_t hilfsturm, size_t zielturm, size_t n)
  {
    if (n > 0)
    {
      // Für n=1 ist das trivial. Für n>1 ist das Ziel trotzdem den Induktionsschritt auf die Induktionsvoraussetzung zu reduzieren
      // Wie in der Vorlesung, verschiebe n-1 scheiben in die Mitte
      verschiebe(h, startturm, zielturm, hilfsturm, n - 1);
      // Verschiebe die letzte und größte Scheibe auf den Zielturm
      h.bewege(startturm, zielturm);
      // Jetzt können wir die Induktionsvoraussetzung anwenden, weil die restlichen zwei Turm invariant unter Permutationen sind
      verschiebe(h, hilfsturm, startturm, zielturm, n - 1);
    }
  }

  // Loese das Spiel rekursiv
  void loese(Hanoi &h)
  { 
    // Verschiebe alle Scheiben in h vom Turm 1 zum Turm 3 mit Hilde von Turm 2
    verschiebe(h, 1, 2, 3, h.anzahl());
    return;
  }
}
