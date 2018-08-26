//
// Created by Yinhao Jiang on 2018/8/26.
//

#include <iostream>
#include <vector>
#include <stack>

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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode* > s;
        if (root!=NULL) s.push(root);
        TreeNode* temp;

        while(!s.empty())
        {
            temp=s.top();
            s.pop();
            res.insert(res.begin(),temp->val);
            if (temp->left!=NULL) s.push(temp->left);
            if (temp->right!=NULL) s.push(temp->right);
        }
        return res;

    }
};