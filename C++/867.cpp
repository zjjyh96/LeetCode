//
// Created by Yinhao Jiang on 2018/11/8.
//

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int x=A.size();
        int y=A[0].size();
        vector<vector<int>> ans(y,vector<int>(x));
        for (int i=0;i<x;i++)
        {
            for (int j=0;j<y;j++)
            {
                ans[j][i]=A[i][j];
            }
        }
        return ans;
    }
};