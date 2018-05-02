//
// Created by Yinhao Jiang on 2018/5/2.
//
#include<iostream>
#include<vector>

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> flag(n+1);
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            flag[nums[i]]=1;
        }
        for(int i=1;i<n+1;i++)
        {
            if(flag[i]!=1)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};