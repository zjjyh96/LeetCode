//
// Created by Yinhao Jiang on 2018/7/22.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0) triangle[i][j]+=triangle[i-1][j];
                else if(j==i) triangle[i][j]+=triangle[i-1][j-1];
                else triangle[i][j]+=min(triangle[i-1][j-1],triangle[i-1][j]);
            }
        }
        int ansmin=triangle[n-1][n-1];
        for (int i=0;i<n;i++)
        {
            if(triangle[n-1][i]<ansmin) ansmin=triangle[n-1][i];
        }
        return ansmin;

    }
};