//
// Created by Yinhao Jiang on 2018/7/31.
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
    bool isSym(TreeNode* p,TreeNode* q)
    {
        if (p!=NULL && q!=NULL)
            if (p->val!=q->val) return false;
            else return (isSym(p->left,q->right)&&isSym(p->right,q->left));
        else if (p==NULL && q==NULL) return true;
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        else return isSym(root->left,root->right);
    }
};