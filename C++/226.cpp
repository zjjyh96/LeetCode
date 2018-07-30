//
// Created by Yinhao Jiang on 2018/7/30.
//
#include <iostream>
using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* node;
        if (root==NULL) return root;
        else
        {
            node=root->left;
            root->left=root->right;
            root->right=node;
        }
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};