#pragma once

#include <memory>

#include "data_structures/doubly_linked_list_node.hpp"

namespace data_structures
{

  // Anforderungen:
  // Container
  //   size()
  // iterierbar
  //   get_first()
  //   next()
  // sequentiell
  //   verträglieche insert/remove-Operationen
  // einfach verkettete Liste
  //   iterator-Reihenfolge = sequentielle Reihenfolge
  //   insert_front(data)
  //   insert_after(node, data)
  //   remove_front()
  //   remove_after(node)
  // doppelt verkettete Liste
  //   get_last()
  //   prev()
  //   insert_back(data)
  //   insert_before(node, data)
  //   remove_back()
  //   remove_before(node)

  class DoublyLinkedList
  {
  public:
    DoublyLinkedList();
    //
    // FEHLENDE FUNKTIONEN DER ANFORDERUNGSLISTE HIER ERGÄNZEN
    //
    size_t size() const;

    // Get the first / last Node of the current List
    DListNodeSharedPtr get_first() const;
    DListNodeSharedPtr get_last() const;

    // Get the next / previous Node of the current List
    DListNodeSharedPtr next(const DListNodeSharedPtr &n) const;
    DListNodeSharedPtr prev(const DListNodeSharedPtr &n) const;

    // Insert and delete Nodes
    DListNodeSharedPtr insert_front(int x);
    DListNodeSharedPtr insert_back(int x);
    DListNodeSharedPtr insert_after(const DListNodeSharedPtr &pred, int x);
    DListNodeSharedPtr insert_before(const DListNodeSharedPtr &succ, int x);
    DListNodeSharedPtr remove(const DListNodeSharedPtr &n);

    // Print the current List
    void print() const;

  private:
    size_t num_elements;
    DListNodeSharedPtr head;
    DListNodeSharedPtr tail;
  };

}
