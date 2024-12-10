#include <iostream>
#include <string>

#include <data_structures/binary_tree.hpp>

int main() {
  data_structures::BinaryTree bt;
  bt.create_root(1);
  auto root = bt.get_root();
  root->create_left_child(2);
  root->create_right_child(3);
  auto rootL = root->get_left_child();
  rootL->create_left_child(4);
  rootL->create_right_child(5);
  std::cout << "Levelorder:" << std::endl;
  bt.print_levelorder();
  std::cout << "Preorder (stets linksherum):" << std::endl;
  bt.print_preorder();
  std::cout << "Inorder (stets linksherum untere Seite):" << std::endl;
  bt.print_inorder(bt.get_root());
  std::cout << "\nPostorder (stets linksherum von rechts):" << std::endl; 
  bt.print_postorder(bt.get_root());
  std::cout << std::endl;
}
