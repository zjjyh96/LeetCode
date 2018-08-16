//
// Created by Yinhao Jiang on 2018/8/16.
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode *> s;
        if (root!=NULL) s.push(root);

        while (!s.empty())
        {
            TreeNode * cur=s.top();
            ans.push_back(cur->val);
            s.pop();
            if (cur->right!=NULL) s.push(cur->right);
            if (cur->left!=NULL) s.push(cur->left);
        }
        return ans;
    }
};