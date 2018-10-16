//
// Created by Yinhao Jiang on 2018/10/15.
//

class Solution {
public:
    int findLength(vector<int>& nums, int find)
    {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<n && nums[i]!=find) i++;
        while(j>=0 && nums[j]!=find) j--;
        return j-i+1;
    }

    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(50000);
        int m=0;
        int num=-1;
        for (int i=0;i<n;i++)
        {
            count[nums[i]]++;
            if (m<count[nums[i]])
            {
                m=count[nums[i]];
                num=nums[i];
            }
        }
        int ans=INT_MAX;
        for (int i=0;i<=49999;i++)
        {

            int length;
            if (count[i]==m)
            {
                length=findLength(nums,i);
                if (length<ans) ans=length;
            }
        }
        return ans;
    }
};