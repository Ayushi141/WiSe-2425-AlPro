#include "data_structures/binary_tree_node.hpp"

namespace data_structures
{
    // Konstruktor: Erstellt einen neuen Baumknoten mit dem übergebenen Datenwert
    BinaryTreeNode::BinaryTreeNode(int data) : data_(data) {};

    // Gibt einen Shared Pointer auf das linke Kind des aktuellen Knotens zurück
    BinaryTreeNodeSharedPtr BinaryTreeNode::get_left_child() const
    {
        return left_child;
    }

    // Gibt einen Shared Pointer auf das rechte Kind des aktuellen Knotens zurück
    BinaryTreeNodeSharedPtr BinaryTreeNode::get_right_child() const
    {
        return right_child;
    }

    // Gibt den gespeicherten Datenwert des Knotens zurück
    int BinaryTreeNode::get_data() const
    {
        return data_;
    }

    // Aktualisiert den Datenwert des Knotens
    void BinaryTreeNode::set_data(int data)
    {
        data_ = data;
    }

    // Setzt oder aktualisiert das linke Kind:
    // Falls kein linkes Kind existiert, wird ein neuer Knoten erstellt
    // Falls bereits ein linkes Kind existiert, wird dessen Datenwert aktualisiert
    void BinaryTreeNode::set_left_child(int data)
    {
        if (get_left_child() == nullptr)
        {
            left_child = std::make_shared<BinaryTreeNode>(data);
        }
        else
        {
            get_left_child()->data_ = data;
        }
    }

    // Setzt oder aktualisiert das rechte Kind:
    // Falls kein rechtes Kind existiert, wird ein neuer Knoten erstellt
    // Falls bereits ein rechtes Kind existiert, wird dessen Datenwert aktualisiert
    void BinaryTreeNode::set_right_child(int data)
    {
        if (get_right_child() == nullptr)
        {
            right_child = std::make_shared<BinaryTreeNode>(data);
        }
        else
        {
            get_right_child()->data_ = data;
        }
    }

    // Entfernt das linke Kind, falls vorhanden
    void BinaryTreeNode::remove_left_child()
    {
        left_child = nullptr;
    }

    // Entfernt das rechte Kind, falls vorhanden
    void BinaryTreeNode::remove_right_child()
    {
        right_child = nullptr;
    }
}