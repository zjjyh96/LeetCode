//
// Created by Yinhao Jiang on 2018/7/20.
//
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

//  Solution 1:
        int n=nums.size();
        if (n==0) return 0;
        vector<int> ans(n);
        ans[0]=1;
        int max=1;
        for (int i=1;i<n;i++)
        {
            for (int j=0;j<i;j++)
            {
                if(nums[i]>nums[j] && ans[j]>ans[i]) ans[i]=ans[j];
            }
            ans[i]++;
            if (ans[i]>max) max=ans[i];
        }
        return max;

////  Solution 2：
//        int n=nums.size();

    }
};