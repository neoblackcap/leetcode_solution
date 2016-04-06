//
// Created by Neo Ko on 16/4/4.
//

#include <cstdio>
#include "InvertBinaryTree.h"

TreeNode *InvertBinaryTree::invertTree(TreeNode *root) {
    if (root == NULL) {
        return root;
    }
    if (root->left != NULL || root->right != NULL) {
        TreeNode *tmp = root->left;
        root->left = root->right;
        root->right = tmp;
    }
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
