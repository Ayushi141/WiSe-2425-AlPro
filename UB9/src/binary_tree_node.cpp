#include <data_structures/binary_tree_node.hpp>
#include <memory>

namespace data_structures
{

  // Konstruktor
  // Bei der Objekterzeugung werden zuerst die Membervariablen initialisiert,
  // dabei wird das Member _parent mit dem übergegeben Wert parent initialisiert,
  // das Member _left_child wird mit dem Wert nullptr initialisiert (d.h., es ist noch kein linkes Kind vorhanden),
  // das Member _right_child wird mit dem Wert nullptr initialisiert (d.h., es ist noch kein rechted Kind vorhanden) und
  // das Member _data wird mit dem übergebenen Wert data initialisiert.
  // Anschließend wird der Funktionscode des Konstruktors ausgeführt, dieser ist hier leer,
  // da wir neben der Initialisierung nichts weiteres tun wollen.
  BinaryTreeNode::BinaryTreeNode(data_t data, BinaryTreeNodeWeakPtr parent)
      : _parent(parent),
        _left_child(nullptr),
        _right_child(nullptr),
        _data(data)
  {
  }

  // Getter für den gespeicherten Datenwert
  const BinaryTreeNode::data_t BinaryTreeNode::get_data() const
  {
    return _data;
  }

  // Getter für den Datenwert des linken Kindknotens
  const BinaryTreeNode::data_t BinaryTreeNode::get_left_child_data() const
  {
    return _left_child->get_data();
  }

  // Getter für den Datenwert des rechten Kindknotens
  const BinaryTreeNode::data_t BinaryTreeNode::get_right_child_data() const
  {
    return _right_child->get_data();
  }

  // Gibt einen Weak Pointer auf den Elternknoten zurück
  BinaryTreeNodeWeakPtr BinaryTreeNode::get_parent()
  {
    return _parent;
  }

  // Gibt einen gemeinsam genutzten Zeiger auf das linke Kind zurück
  BinaryTreeNodeSharedPtr BinaryTreeNode::get_left_child()
  {
    return _left_child;
  }

  // Gibt einen gemeinsam genutzten Zeiger auf das rechte Kind zurück
  BinaryTreeNodeSharedPtr BinaryTreeNode::get_right_child()
  {
    return _right_child;
  }

  // Erstellt einen neuen linken Kindknoten mit dem übergebenen Datenwert
  void BinaryTreeNode::create_left_child(data_t data)
  {
    // Hier wird die Funktion weak_from_this verwendet, siehe auch Vorlesungsfolien.
    _left_child = std::make_shared<BinaryTreeNode>(data, weak_from_this());
  }

  // Erstellt einen neuen rechten Kindknoten mit dem übergebenen Datenwert
  void BinaryTreeNode::create_right_child(data_t data)
  {
    // Hier wird die Funktion weak_from_this verwendet, siehe auch Vorlesungsfolien.
    _right_child = std::make_shared<BinaryTreeNode>(data, weak_from_this());
  }

}
