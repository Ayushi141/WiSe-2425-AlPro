#include <memory>
#include <string>
#include <iostream>
#include "data_structures/list.hpp"
#include "data_structures/list_node.hpp"

namespace data_structures
{
    uint32_t List::size()
    {
        std::cout << num_elements << std::endl;
        return num_elements;
    }

    ListNodeptr List::get_first() const
    {
        return head;
    }

    ListNodeptr List::next(const ListNodeptr &n) const
    {
        return n->next;
    }

    ListNodeptr List::insert_front(const HashKeyPair &x)
    {
        // Initialisiere den Knoten und gebe den Pointer zum Knoten zurück
        std::shared_ptr<ListNode> newNode = std::make_shared<ListNode>(x);
        // Setze next vom neuen Knoten auf den Nachfolger
        newNode->next = head;
        // Setze head auf den neuen Knoten
        head = newNode;
        // Inkrementiere Anzahl von Elementen
        num_elements++;
        return newNode;
    }

    ListNodeptr List::remove_front()
    {
        // Prüfe, ob die Liste leer ist
        if (head == nullptr)
        {
            return nullptr;
        }
        // Speichere Pointer auf das zu löschende Element
        ListNodeptr oldHead = head;
        // Setze head auf das zweite Element
        head = head->next;
        // Setze next von dem zu löschenden Element auf null
        oldHead->next = nullptr;
        // Dekrementiere Anzahl an Elementen
        num_elements--;
        // Gebe Pointer zum ersten Element zurück
        return oldHead;
    }

    ListNodeptr List::insert_after(const ListNodeptr &pred, const HashKeyPair &x)
    {
        ListNodeptr oldNext = pred->next;
        pred->next = std::make_shared<ListNode>(x);
        pred->next->next = oldNext;
        num_elements++;
        return pred->next;
    }

    ListNodeptr List::remove_after(const ListNodeptr &pred)
    {
        if (pred->next == nullptr)
        {
            return nullptr;
        }
        ListNodeptr oldNext = pred->next;
        pred->next = oldNext->next;
        oldNext->next = nullptr;
        num_elements--;
        return oldNext;
    }

    void List::print() const
    {
        // Prüfe, ob List leer ist
        if (head == nullptr)
        {
            std::cout << "Die Liste ist leer." << std::endl;
            return;
        }
        // Loope über Pointer zu Items in der Liste
        for (auto x = head; x != nullptr; x = x->next)
        {
            // Drucke die Werte über die Pointer mit -> Operator (alternativ zu (x*)._data)
            std::cout << "[" << x->data.hash_value << " , " << x->data.key << "] ";
        }
        std::cout << std::endl;
        return;
    }
}