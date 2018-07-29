//
// Created by Yinhao Jiang on 2018/7/30.
//

#include <iostream>
//#include <algorithm>
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
    int maxDepth(TreeNode* root) {
        if (root==NULL) return 0;
        else return max(maxDepth(root->right),maxDepth(root->left))+1;
    }
};