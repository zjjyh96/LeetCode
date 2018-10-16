//
// Created by Yinhao Jiang on 2018/10/15.
//

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> copy(nums);
        std::sort(copy.begin(),copy.end());
        int n=copy.size();
        int i=0,j=n-1;
        while(i<j && nums[i]==copy[i]) i++;
        while(j>=i && nums[j]==copy[j]) j--;
        return j-i+1;
    }
};