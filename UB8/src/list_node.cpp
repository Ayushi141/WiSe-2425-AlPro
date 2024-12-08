#include "data_structures/list_node.hpp"

namespace data_structures {
    // Konstruktor, erstellt einen neuen Knoten. next wird auf nullptr gesetzt (das ist der letzte Knoten)
    ListNode::ListNode(int data) : _data(data), next(nullptr) {};
}