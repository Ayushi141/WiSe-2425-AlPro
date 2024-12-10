#include <data_structures/binary_tree.hpp>
#include <iostream>
#include <queue>
#include <stack>

namespace data_structures
{

  // Konstruktor
  // Bei der Objekterzeugung werdne zuerst die Membervariablen initialisiert,
  // dabei wird das Member _root mit dem Wert nullptr initialisiert, das heißt, es ist zunächst keine Wurzel vorhanden,
  // das entspricht also dem leeren Baum.
  // Anschließend wird der Funktionscode des Konstruktors ausgeführt, dieser ist hier leer,
  // da wir neben der Initialisierung nichts weiteres tun wollen.
  BinaryTree::BinaryTree()
      : _root(nullptr)
  {
  }
  // Gibt einen gemeinsam genutzten Zeiger auf den Wurzelknoten zurück
  const BinaryTreeNodeSharedPtr BinaryTree::get_root() const
  {
    return _root;
  }

  // Erstellt einen neuen Wurzelknoten mit dem übergebenen Datenwert
  void BinaryTree::create_root(BinaryTreeNode::data_t data)
  {
    _root = std::make_shared<BinaryTreeNode>(data);
  }

  // Setzt einen neuen Wurzelknoten
  void BinaryTree::set_root(BinaryTreeNodeSharedPtr new_root_node)
  {
    _root = new_root_node;
  }

  // Gibt den Baum in Preorder-Reihenfolge aus (Wurzel -> Links -> Rechts)
  void BinaryTree::print_preorder() const
  {
    if (_root == nullptr)
    {
      return; // Frühes return bei leerem Baum
    }
    std::stack<BinaryTreeNodeSharedPtr> s;
    s.push(_root);
    while (!s.empty())
    {
      BinaryTreeNodeSharedPtr current = s.top();
      s.pop();
      std::cout << current->get_data() << " ";
      // Rechtes Kind zuerst pushen (wird später bearbeitet)
      if (current->get_right_child() != nullptr)
      {
        s.push(current->get_right_child());
      }
      // Linkes Kind als letztes pushen (wird als nächstes bearbeitet)
      if (current->get_left_child() != nullptr)
      {
        s.push(current->get_left_child());
      }
    }
    std::cout << std::endl;
  }

  // Rekursive Inorder-Traversierung (Links -> Wurzel -> Rechts)
  void BinaryTree::print_inorder(BinaryTreeNodeSharedPtr node) const
  {
    if (node == nullptr)
    {
      return;
    }
    print_inorder(node->get_left_child());
    std::cout << node->get_data() << " ";
    print_inorder(node->get_right_child());
  }

  // Rekursive Postorder-Traversierung (Links -> Rechts -> Wurzel)
  void BinaryTree::print_postorder(BinaryTreeNodeSharedPtr node) const
  {
    if (node == nullptr)
    {
      return;
    }
    print_postorder(node->get_left_child());
    print_postorder(node->get_right_child());
    std::cout << node->get_data() << " ";
  }

  // Gibt den Binärbaum ebenenweise aus (Level-Order Traversierung)
  // Fügt einen Zeilenumbruch ein, wenn die Anzahl der ausgegebenen Knoten eine Zweierpotenz ist
  void BinaryTree::print_levelorder() const
  {
    std::queue<BinaryTreeNodeSharedPtr> q;
    q.push(_root);
    int count = 0;
    while (!q.empty())
    {
      count++;
      BinaryTreeNodeSharedPtr current = q.front();
      q.pop();
      // Prüft ob Knoten eine Zweierpotenz ist
      // Beispiel: 16 = 10000 & 15 = 01111 -> bitwise ergibt sich 00000
      if (count > 1 && (count & (count - 1)) == 0)
      {
        std::cout << std::endl;
      }
      std::cout << current->get_data() << " ";

      if (current->get_left_child() != nullptr)
      {
        q.push(current->get_left_child());
      }

      if (current->get_right_child() != nullptr)
      {
        q.push(current->get_right_child());
      }
    }
    std::cout << std::endl;
  }
}
