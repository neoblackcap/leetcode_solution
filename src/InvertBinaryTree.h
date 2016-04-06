//
// Created by Neo Ko on 16/4/4.
//

#ifndef LEETCODE_INVERTBINARYTREE_H
#define LEETCODE_INVERTBINARYTREE_H
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) { }
};

class InvertBinaryTree {
public:
    TreeNode *invertTree(TreeNode *root);
};

#endif //LEETCODE_INVERTBINARYTREE_H
