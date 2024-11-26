#pragma once

#include <vector>
#include <cstddef>

namespace SimplerGraph{
  
  class SimplerGraph{
  public:
    // Erstellt einen Graph mit einer festen Knotenanzahl
    SimplerGraph(size_t knoten_anzahl);
    // Druckt den Graphen
    void drucke() const;
    // Schaltet den (i,j)-Eintrag um
    void umschalteKante(int i, int j);
    // Breitensuche vom Knoten start aus
    std::vector<int> BFS(int start);
    // Tiefensuche vom Knoten start aus
    std::vector<int> DFS(int start);
  private:
    const size_t knoten_anz;
    std::vector<std::vector<bool>> knoten;
  };
}
