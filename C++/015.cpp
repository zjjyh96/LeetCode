//
// Created by Yinhao Jiang on 2018/10/2.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        // vector<int> last;
        for (int i=0;i<n-2;i++)
        {
            int left=i+1;
            int right=n-1;
            int target=-nums[i];
            while (left<right)
            {
                while(left<right && nums[left]+nums[right]>target) right--;
                while(left<right && nums[left]+nums[right]<target) left++;
                if(left<right && nums[left]+nums[right]==target)
                {
                    vector<int> cur;
                    cur.push_back(nums[i]);
                    cur.push_back(nums[left]);
                    cur.push_back(nums[right]);
                    if (std::find(ans.begin(), ans.end(), cur) == ans.end()){
                        ans.push_back(cur);
                    }
                    // cout<<nums[i]<<" "<<nums[left]<<" "<<nums[right]<<endl;
                    left++;
                    right++;
                }
            }
        }
        return ans;
    }
};