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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode *> s;
        TreeNode * cur=root;

        while (!s.empty() || cur!=NULL)
        {
            if (cur!=NULL)
            {
                s.push(cur);
                cur=cur->left;
            }
            else {
                cur=s.top();
                s.pop();
                ans.push_back(cur->val);
                cur=cur->right;
            }
        }
        return ans;
    }
};
