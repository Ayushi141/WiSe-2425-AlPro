#include <simpler_graph/simpler_graph.hpp>
#include <iostream>
#include <queue>

namespace SimplerGraph
{
    SimplerGraph::SimplerGraph(size_t knoten_anzahl) : knoten_anz(knoten_anzahl), knoten(knoten_anz, std::vector<bool>(knoten_anzahl, false)) {}

    void SimplerGraph::drucke() const
    {
        std::cout << "Graph hat " << knoten_anz << " Knoten." << std::endl;
        for (size_t i = 0; i < knoten.size(); i++)
        {
            std::cout << "Knoten " << i << " hat Nachbarn:" << std::endl;
            for (size_t j = 0; j < knoten.size(); j++)
            {
                if (knoten[i][j])
                {
                    std::cout << j << " ";
                }
            }
            std::cout << std::endl;
        }
        return;
    };

    void SimplerGraph::umschalteKante(int i, int j)
    {
        knoten[i][j] = !knoten[i][j];
        return;
    }

    std::vector<int> SimplerGraph::BFS(int start)
    {
        std::vector<int> folge;
        std::queue<int> q;
        std::vector<bool> besucht(knoten_anz, false);
        folge.push_back(start);
        q.push(start);
        besucht[start] = true;

        // Während Queue nicht leer
        while (!q.empty())
        {
            // Nehme erstes Element
            int aktuellerKnoten = q.front();
            q.pop();
            // Loope über alle Knoten im Graphen
            for (int j = 0; j < knoten.size(); j++)
            {
                // Falls der Knoten benachbart ist && nicht besucht wurde
                if (knoten[aktuellerKnoten][j] && !besucht[j])
                {
                    folge.push_back(j);
                    q.push(j);
                    besucht[j] = true;
                }
            }
        }
        return folge;
    }

    std::vector<int> SimplerGraph::DFS(int start)
    {
        std::vector<int> folge;
        std::vector<int> stack;
        std::vector<bool> besucht(knoten_anz, false);
        folge.push_back(start);
        stack.push_back(start);
        besucht[start] = true;

        // Während Stack nicht leer
        while (!stack.empty())
        {
            // Nehme erstes Element
            int aktuellerKnoten = stack.back();
            stack.pop_back();
            // Loope über alle Knoten im Graphen
            for (int j = 0; j < knoten.size(); j++)
            {
                // Falls der Knoten benachbart ist && nicht besucht wurde
                if (knoten[aktuellerKnoten][j] && !besucht[j])
                {
                    folge.push_back(j);
                    stack.push_back(j);
                    besucht[j] = true;
                }
            }
        }
        return folge;
    }
}