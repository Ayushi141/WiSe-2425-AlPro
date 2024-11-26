#include <simpler_graph/simpler_graph.hpp>

#define FMT_HEADER_ONLY // Dieses Makro ist nötig, um die Bibliothek simpel einzubinden
#include <fmt/core.h>   // Muss eingebunden werden um {fmt} zu verwenden
#include <fmt/ranges.h> // Muss zur Ausgabe von Arrays eingebunden werden
#include <vector>       // Stellt dynamische Arrays zur Verfügung

int main()
{
  SimplerGraph::SimplerGraph g(6);
  // Kreiere Kanten für einen gerichteten Graphen mit Kreisen
  g.umschalteKante(0, 1);
  g.umschalteKante(1, 2);
  g.umschalteKante(2, 3);
  g.umschalteKante(3, 1);
  g.umschalteKante(1, 4);
  g.umschalteKante(4, 5);
  g.umschalteKante(5, 2);
  g.drucke();
  fmt::print("{}\n", g.BFS(0));
}
