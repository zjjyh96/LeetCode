//
// Created by Yinhao Jiang on 2018/5/2.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.empty()) return 0;
        int ans=nums[0];
//        A xor B xor B = A
        for (int i = 1;i<nums.size();i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
};