//
// Created by 蒋印豪 on 2019-04-22.
//

class Solution {
public:
    int res = 0;
    int calculate(TreeNode* root) {
        if (root == NULL){
            return 0;
        }
        int left = calculate(root->left);
        int right = calculate(root->right);

        res += abs(left-right);
        return left + right + root->val;
    }

    int findTilt(TreeNode* root) {
        calculate(root);
        return res;
    }
};