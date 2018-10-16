//
// Created by Yinhao Jiang on 2018/10/15.
//

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[(i+k)%n]=nums[i];
        }
        nums=ans;
    }
};