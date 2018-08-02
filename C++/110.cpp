//
// Created by Yinhao Jiang on 2018/8/2.
//

#include <iostream>
#include <limits.h>
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
    static bool isbalanced;
    bool calDepth(TreeNode* root)
    {
        if (root!=NULL && root->left==NULL && root->right==NULL)
            return 1;
        if (root==NULL) return 0;
        int r=calDepth(root->right);
        int l=calDepth(root->left);
        if (abs(r-l)>1) isbalanced=false;
        return max(r,l)+1;
    }
    bool isBalanced(TreeNode* root) {
        isbalanced=true;
        calDepth(root);
        return (bool)isbalanced;
    }
};

