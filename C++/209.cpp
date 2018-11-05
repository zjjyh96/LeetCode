//
// Created by Yinhao Jiang on 2018/11/4.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n=nums.size();
        vector<int> sums(n+1,0);
        if (n==0) return 0;
        sums[0]=0;
        for (int i=1;i<n+1;i++)
        {
            sums[i]=sums[i-1]+nums[i-1];
        }
        int min=INT_MAX;
        for (int i=0;i<n;i++)
        {
            for(int j=i+1;j<n+1;j++)
            {
                if (sums[j]-sums[i]>=s && j-i<min)
                {
                    min=j-i;
                    break;
                }
            }
        }
        if (min==INT_MAX) return 0;
        else return min;
    }
};