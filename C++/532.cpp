//
// Created by Yinhao Jiang on 2018/10/15.
//

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> hash;
        if (k<0) return 0;
        for (int i=0;i<n;i++)
        {
            hash[nums[i]]++;
        }
        int count=0;

        std::sort(nums.begin(),nums.end());
        if (k==0)
        {
            for (int i=0;i<n;i++)
            {
                if (hash[nums[i]]>1 && hash[nums[i]+k]>1)
                {
                    count++;
                    hash[nums[i]]=0;
                }
            }
        }
        else
            for (int i=0;i<n;i++)
            {
                if (hash[nums[i]]>0 && hash[nums[i]+k]>0)
                {
                    count++;
                    hash[nums[i]]=0;
                }
            }
        return count;
    }
};