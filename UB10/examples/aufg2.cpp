#include <random>
#include <vector>
#include <iostream>
#include "data_structures/binary_tree.hpp"

// Dies ist ein naiver Test (der nicht vollständig prüft ob ihre Implementierung korrekt ist).
void naiver_test()
{
  // Hier erstellen wir eine zufällige Folge von Zahlen
  std::random_device rand_device;
  std::mt19937 rand_engine(rand_device());
  std::uniform_int_distribution<int> dist(100, 999);
  std::vector<int> zahlenfolge(20);
  for (int &x : zahlenfolge)
  {
    x = dist(rand_engine);
  }

  // Nutzen Sie diese Folge, um ihren binären Suchbaum aufzubauen.
  data_structures::BinaryTree BinarySearchTree(zahlenfolge);

  // Prüfen Sie, ob ihr binärer Suchbaum die Elemente im Inorderdurchlauf aufsteigend ausgeben.
  BinarySearchTree.print_inorder(BinarySearchTree.get_root());
  std::cout << std::endl;

  // Prüfen Sie, ob die Zahl 42 in Ihrem Baum enthalten ist.
  if (BinarySearchTree.search_node(42) == nullptr)
  {
    std::cout << "Knoten 42 nicht gefunden" << std::endl;
  }
  else
  {
    std::cout << "Knoten 42 gefunden" << std::endl;
  }

  std::vector<int> numbers({1, 20, 32, 42, 59});
  data_structures::BinaryTree BinarySearchTree2(numbers);
  // Prüfen Sie, ob die Zahl 42 in Ihrem Baum enthalten ist.
  if (BinarySearchTree2.search_node(42) == nullptr)
  {
    std::cout << "Knoten 42 nicht gefunden" << std::endl;
  }
  else
  {
    std::cout << "Knoten 42 gefunden" << std::endl;
  }
}

int main()
{
  // ...

  naiver_test();

  // ...
}
