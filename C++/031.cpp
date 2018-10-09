//
// Created by Yinhao Jiang on 2018/10/9.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void findNext(vector<int>& nums,int index)
    {
        int temp=nums[index-1];
        int n=nums.size();
        int min=INT_MAX;
        int swift=-1;
        for (int i=index;i<n;i++)
        {
            if (nums[i]>temp && min>(nums[i]-temp))
            {
                min=nums[i]-temp;
                swift=i;
            }
        }
        nums[index-1]=nums[swift];
        nums[swift]=temp;
    }
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if (n>1)
        {
            int i=n-1;
            while (i>0 && nums[i]<=nums[i-1])
            {
                i--;
            }
            if (i==0) std::sort(nums.begin(),nums.end());
            else
            {
                findNext(nums,i);
                std:sort(nums.begin()+i,nums.end());
            }

        }
    }
};