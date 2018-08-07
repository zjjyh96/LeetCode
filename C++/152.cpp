//
// Created by Yinhao Jiang on 2018/8/7.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int imax,imin,ans;
        ans=imax=imin=nums[0];
        for (int i=1;i<n;i++)
        {
            if(nums[i]<0) swap(imax,imin);
            imax=max(nums[i],imax*nums[i]);
            imin=min(nums[i],imin*nums[i]);

            ans=max(imax,ans);
        }
        return ans;
    }
};
