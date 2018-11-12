//
// Created by Yinhao Jiang on 2018/11/11.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> step(n,0);
        int end=0,start=0;
        for(int i=0;i<n;i++)
        {
            start=end+1;
            end=min(n-1,i+nums[i]);
            for(int j=start;j<=end;j++)
            {
                if(step[j]==0)
                {
                    step[j]=step[i]+1;
                    // cout<<step[j]<<" ";
                }
            }
        }
        return step[n-1];
    }
};