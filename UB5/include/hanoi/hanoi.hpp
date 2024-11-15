#pragma once

#include <vector>
#include <cstddef>

namespace hanoi{
  
  class Hanoi{
  public:
    // Erstellt eine Startkonfiguration mit anz vielen Scheiben
    Hanoi(size_t _anz);
    
    // Verschiebt die oberste Scheibe (falls erlaubt) und gibt true zurück
    // genau dann wenn die Bewegung erlaubt war
    bool bewege(size_t von, size_t nach);
    
    // Druckt die aktuelle Konfiguration auf der Konsole aus
    void drucke() const;

    // Zeigt wie viele Scheiben gibt es insgesamt
    size_t anzahl() const;

  private:
    // Wir haben drei Stapel. Also bietet sich ein Array von Zahlenarrays an.
    std::vector<std::vector<size_t>> stapel;
    // Anzahl an Scheiben bei der Initialisierung
    size_t const ANZ;
    // Findet die oberste Scheibe im Turm turm
    size_t indexObersterScheibe(size_t turm);
    // Finde den untersten freien Platz im Turm turm
    size_t indexUntersterPlatz(size_t turm);
  };
}
