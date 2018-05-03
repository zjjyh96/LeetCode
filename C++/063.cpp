//
// Created by Jinfee on 2018/5/2.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int> > ans(m);
        for(int i=0;i<m;i++)
        {
            ans[i].resize(n);
        }
        int i=0,j=0;
        while (i<m && obstacleGrid[i][0]!=1)
        {
            ans[i][0]=1;
            i++;
        }
        while (j<n && obstacleGrid[0][j]!=1)
        {
            ans[0][j]=1;
            j++;
        }
        for (i=1;i<m;i++)
        {
            for (j=1;j<n;j++)
            {
                if (obstacleGrid[i][j]!=1) ans[i][j]=ans[i-1][j]+ans[i][j-1];
            }
        }
        return ans[m-1][n-1];

    }
};