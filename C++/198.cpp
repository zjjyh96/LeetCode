//
// Created by Yinhao Jiang on 2018/7/22.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n==0) return 0;
        vector<int> arr(n,0);
        if (n==1) return nums[0];
        if (n==2) return max(nums[0],nums[1]);
        arr[0]=nums[0];
        arr[1]=nums[1];
        arr[2]=arr[0]+nums[2];
        for(int i=3;i<n;i++)
        {
            arr[i]=max(arr[i-2],arr[i-3])+nums[i];
        }
        return max(arr[n-1],arr[n-2]);
    }
};

int main()
{
    vector<int> ans;
    ans.push_back(2);
    ans.push_back(7);
    ans.push_back(9);
    ans.push_back(3);
    ans.push_back(1);
    Solution s;
    cout<<s.rob(ans)<<endl;
    return 0;
}