//
// Created by 蒋印豪 on 2018/10/1.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        vector<int> sum(n+1);
        sum[0]=0;
        for (int i=0;i<n;i++)
        {
            sum[i+1]=sum[i]+nums[i];
        }
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n+1;j++)
            {
                if(sum[j]-sum[i]==k) count++;
            }
        }
        return count;
    }
};