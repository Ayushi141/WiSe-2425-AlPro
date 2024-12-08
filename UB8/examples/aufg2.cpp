#include "data_structures/binary_tree.hpp"

int main()
{
  data_structures::BinaryTree tree(4);
  tree.get_root()->set_left_child(2);
  tree.get_root()->set_right_child(3);
  tree.get_root()->get_left_child()->set_left_child(8);
  tree.get_root()->get_left_child()->set_right_child(6);
  tree.get_root()->get_right_child()->set_left_child(9);
  tree.print();
  tree.get_root()->remove_left_child();
  tree.get_root()->set_data(1);
  tree.print();
}