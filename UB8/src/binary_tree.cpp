// src/binary_tree.cpp
#include <data_structures/binary_tree.hpp>
#include <queue>
#include <iostream>

namespace data_structures
{
    // Konstruktor: Erstellt einen neuen Binärbaum mit einem Wurzelknoten mit dem übergebenen Datenwert
    BinaryTree::BinaryTree(int data)
    {
        root = std::make_shared<BinaryTreeNode>(data);
    }

    // Gibt den Binärbaum ebenenweise aus (Level-Order Traversierung)
    // Fügt einen Zeilenumbruch ein, wenn die Anzahl der ausgegebenen Knoten eine Zweierpotenz ist
    void BinaryTree::print() const
    {
        std::queue<BinaryTreeNodeSharedPtr> q;
        q.push(root);
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

    // Gibt einen Shared Pointer auf den Wurzelknoten des Baums zurück
    BinaryTreeNodeSharedPtr BinaryTree::get_root() const
    {
        return root;
    }
}