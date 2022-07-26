#include <cstddef>
#include <type_traits>
#include <iostream>
#include <typeinfo>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
