//
// Created by Yinhao Jiang on 2018/11/8.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int x=A.size();
        int y=A[0].size();
        vector<vector<int>> ans(x,vector<int>(y,0));
        for (int i=0;i<x;i++)
        {
            for (int j=0;j<y;j++)
            {
                ans[i][j]=1-A[i][y-1-j];
            }
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> m={
            {1,1,0},
            {1,0,1},
            {0,0,0}
    };
    Solution ans;
    m=ans.flipAndInvertImage(m);
    return 0;
}