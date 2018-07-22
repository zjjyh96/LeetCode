//
// Created by Yinhao Jiang who is learning DP on 2018/7/22.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        vector<int> ans(n+1);
        ans[1]=1;
        for(int i=2;i<=n;i++)
        {
            ans[i]=i;
            // 状态转移方程
            for(int j=1;j<=sqrt(i);j++)
            {
                ans[i]=min(ans[i-j*j]+1,ans[i]);
            }
        }
        return ans[n];
    }
};

int main()
{
    Solution ans;
    cout<<ans.numSquares(4)<<endl;
    return 0;
}