//
// Created by Yinhao Jiang who is a graduate student now on 2018/9/24.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n==0) return 0;
        if (n==1) return nums[0];
        if (n==2) return max(nums[0],nums[1]);
        return max(robber(nums,0,n-2),robber(nums,1,n-1));
    }

    int robber(vector<int>& nums, int l, int r)
    {
        int pre=0,cur=0,temp;
        for(int i=l;i<=r;i++)
        {
            temp=max(pre+nums[i],cur);
            pre=cur;
            cur=temp;
        }
        return cur;
    }
};