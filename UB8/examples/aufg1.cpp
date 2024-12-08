#include <iostream>
#include <data_structures/list.hpp>

int main() {
  data_structures::List myList(5);
  myList.insert_front(2);
  myList.insert_front(9);
  myList.print();
  myList.size();

  myList.remove_front();
  myList.print();
  myList.size();
  myList.remove_front();
  myList.print();
  myList.size();

  myList.insert_after(myList.get_first(), 7);
  myList.print();
  myList.size();

  myList.remove_after(myList.get_first());
  myList.print();
  myList.size();
  myList.remove_front();
  myList.print();
  myList.size();
}
