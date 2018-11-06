//
// Created by Yinhao Jiang on 2018/11/6.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int left=0, right=n-1;
        int i=0;
        while (i<=right)
        {
            if (nums[i]==0)
            {
                swap(nums[i++],nums[left++]);
            }
            else if (nums[i]==2)
            {
                swap(nums[i],nums[right--]);
            }
            else i++;
        }
    }
};