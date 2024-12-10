#include <data_structures/doubly_linked_list.hpp>
#include <iostream>

int main() {
  data_structures::DoublyLinkedList DList;
  DList.insert_front(1);
  DList.insert_front(5);
  DList.insert_front(7);
  DList.print();
  std::cout << "Anzahl Elemente: " << DList.size() << std::endl;
  data_structures::DListNodeSharedPtr secondNode = DList.next(DList.get_first());
  DList.insert_after(secondNode, 11);
  DList.print();
  DList.remove(secondNode);
  DList.print();
  DList.remove(DList.get_first());
  DList.print();
  DList.remove(DList.get_last());
  DList.print();
  DList.insert_before(DList.get_first(), 10);
  DList.insert_after(DList.get_first(), 20);
  DList.insert_before(DList.next(DList.get_first()), 30);
  DList.print();
  std::cout << "Anzahl Elemente: " << DList.size() << std::endl;
}
