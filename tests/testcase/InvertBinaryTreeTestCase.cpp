//
// Created by Neo Ko on 16/4/4.
//

#include "gtest/gtest.h"
#include "solution/InvertBinaryTree.h"
#include <deque>
#include <initializer_list>

using namespace std;

class BinaryTreeBuilder {
private:
    set<TreeNode*> _marks;
    set<TreeNode*> _serialize_marks;
    deque<TreeNode*> queue;
    deque<TreeNode*> _serialize_queue;
    deque<int> source;
    vector<int> _result;

public:
    BinaryTreeBuilder(initializer_list<int> data) {
        for (auto it: data) {
            source.push_back(it);
        }
    }

    TreeNode* build_tree(void) {
        TreeNode* root = new TreeNode(source.front());
        source.pop_front();
        _marks.insert(root);
        queue.push_back(root);

        while (!source.empty()) {
            auto node = queue.front();
            queue.pop_front();

            if (_marks.find(node) == _marks.end()) {
                _marks.insert(node);
                queue.push_back(node);
            }

            if (node->left == NULL) {
                node->left = new TreeNode(source.front());
                source.pop_front();
            }
            if (node->right == NULL) {
                node->right = new TreeNode(source.front());
                source.pop_front();
            }
            if (_marks.find(node->left) == _marks.end()) {
                _marks.insert(node->left);
                queue.push_back(node->left);
            }
            if (_marks.find(node->right) == _marks.end()) {
                _marks.insert(node->right);
                queue.push_back(node->right);
            }
        }
        return root;
    }

    vector<int>* serialize(TreeNode* root) {
        _serialize_queue.push_back(root);

        while (!_serialize_queue.empty()) {
            auto node = _serialize_queue.front();
            if (node != NULL && _serialize_marks.find(node) == _serialize_marks.end()) {
                _serialize_marks.insert(node);
                _result.push_back(node->val);
                _serialize_queue.push_back(node->left);
                _serialize_queue.push_back(node->right);
            }
            _serialize_queue.pop_front();
        }
        return &_result;
    }

};

TEST(InvertBinaryTreeTestCase, test_solution) {
    InvertBinaryTree solution = InvertBinaryTree();
    BinaryTreeBuilder builder = {4, 2, 7, 1, 3, 6, 9};
    TreeNode* root = builder.build_tree();
    solution.invertTree(root);
    vector<int>* actal_result = builder.serialize(root);
    vector<int> except_result = {4, 7, 2, 9, 6, 3, 1};
    EXPECT_EQ(*actal_result, except_result);
}
