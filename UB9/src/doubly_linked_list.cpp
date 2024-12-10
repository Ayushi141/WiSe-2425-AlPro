#include "data_structures/doubly_linked_list.hpp"
#include <memory>
#include <iostream>

namespace data_structures
{
    DoublyLinkedList::DoublyLinkedList() : num_elements(0), head(nullptr), tail(nullptr) {};

    // Gibt die aktuelle Anzahl der Elemente in der Liste zurück
    size_t DoublyLinkedList::size() const
    {
        return num_elements;
    }

    // Fügt ein neues Element am Anfang der Liste ein
    // Behandelt sowohl leere als auch nicht-leere Listen
    DListNodeSharedPtr DoublyLinkedList::insert_front(int x)
    {
        if (head == nullptr) // Liste war leer
        {
            head = std::make_shared<DoublyLinkedListNode>(x);
            tail = head;
        }
        else
        {
            DListNodeSharedPtr newNode = std::make_shared<DoublyLinkedListNode>(x);
            newNode->next = head;
            newNode->next->prev = newNode;
            head = newNode;
        }
        num_elements += 1;
        return head;
    }

    // Fügt ein neues Element am Ende der Liste ein
    // Behandelt sowohl leere als auch nicht-leere Listen
    DListNodeSharedPtr DoublyLinkedList::insert_back(int x)
    {
        if (head == nullptr) // Liste war leer
        {
            head = std::make_shared<DoublyLinkedListNode>(x);
            tail = head;
        }
        else
        {
            DListNodeSharedPtr newNode = std::make_shared<DoublyLinkedListNode>(x);
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        num_elements += 1;
        return head;
    }

    // Fügt ein Element nach einem gegebenen Knoten ein
    // Wirft eine Exception, wenn der Vorgänger-Knoten null ist
    DListNodeSharedPtr DoublyLinkedList::insert_after(const DListNodeSharedPtr &pred, int x)
    {
        if (pred == nullptr)
        {
            throw std::invalid_argument("Predecessor node cannot be null");
        }

        if (pred == tail)
        {
            return insert_back(x);
        }
        else
        {
            auto newNode = std::make_shared<DoublyLinkedListNode>(x);
            newNode->next = pred->next;
            newNode->prev = pred;
            pred->next->prev = newNode;
            pred->next = newNode;
            num_elements += 1;
            return newNode;
        }
    }

    // Fügt ein Element vor einem gegebenen Knoten ein
    // Wirft eine Exception, wenn der Nachfolger-Knoten null ist
    DListNodeSharedPtr DoublyLinkedList::insert_before(const DListNodeSharedPtr &succ, int x)
    {
        if (succ == nullptr)
        {
            throw std::invalid_argument("Successor node cannot be null");
        }

        if (succ == head)
        {
            return insert_front(x);
        }
        else
        {
            auto newNode = std::make_shared<DoublyLinkedListNode>(x);
            newNode->next = succ;
            newNode->prev = succ->prev;
            succ->prev.lock()->next = newNode;
            succ->prev = newNode;
            num_elements += 1;
            return newNode;
        }
    }

    // Entfernt einen gegebenen Knoten aus der Liste
    DListNodeSharedPtr DoublyLinkedList::remove(const DListNodeSharedPtr &n)
    {
        if (n == nullptr)
        {
            return nullptr;
        }
        auto prev = n->prev.lock();
        auto next = n->next;
        // Entferne den ersten Knoten
        if (prev == nullptr)
        {
            head = next;
            if (next != nullptr)
            {
                next->prev.reset();
            } else {
                tail = nullptr;
            }
        }
        // Entferne den letzten Knoten
        else if (next == nullptr)
        {
            tail = prev;
            prev->next.reset();
        }
        // Entferne Knoten in der Mitte
        else
        {
            prev->next = next;
            next->prev = prev;
        }
        num_elements -= 1;
        return n;
    }

    DListNodeSharedPtr DoublyLinkedList::get_first() const
    {
        return head;
    }

    DListNodeSharedPtr DoublyLinkedList::get_last() const
    {
        return tail;
    }

    // Gibt einen Zeiger auf das nächste Element zurück
    DListNodeSharedPtr DoublyLinkedList::next(const DListNodeSharedPtr &n) const
    {
        return n->next;
    }

    // Gibt einen Zeiger auf das vorherige Element zurück
    DListNodeSharedPtr DoublyLinkedList::prev(const DListNodeSharedPtr &n) const
    {
        return n->prev.lock();
    }

    // Druckt alle Elemente der Liste aus
    void DoublyLinkedList::print() const
    {
        for (auto current = head; current != nullptr; current = current->next)
        {
            std::cout << "[" << current->data_ << "] ";
        }
        std::cout << std::endl;
    }
}