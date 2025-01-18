#pragma once

#include <memory>
#include <vector>
#include <data_structures/binary_tree_node.hpp>

namespace data_structures {

class BinaryTree{
public:
  BinaryTree(std::vector<int>& x);

  // Create and insert node with data = x
  void insert_node(int x);
  // Search for root with number = x
  BinaryTreeNodeSharedPtr search_node(int x);

  // Get the root
  const BinaryTreeNodeSharedPtr get_root() const;

  // Create / Set the root
  void create_root(BinaryTreeNode::data_t data);
  void set_root(BinaryTreeNodeSharedPtr new_root_node);

  // Print the binary tree
  void print_preorder() const;
  void print_inorder(BinaryTreeNodeSharedPtr node) const;
  void print_postorder(BinaryTreeNodeSharedPtr node) const;
  void print_levelorder() const;

  void DFS() const;
  void DFSrecursive(BinaryTreeNodeSharedPtr node);
private:
  BinaryTreeNodeSharedPtr _root;
};

}
