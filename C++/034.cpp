//
// Created by Yinhao Jiang who lost Freda_Ren today on 2018/6/1.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int length=nums.size();
        int left=0,right=length-1,mid;
        vector<int> ans;
        if (length==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        while (left<right)
        {
            mid=(left+right)/2;
            if (nums[mid]<target) left=mid+1;
            else if (nums[mid]>target) right=mid-1;
            if (nums[mid]==target)
            {
                left=mid;
                break;
            }
        }
        if (nums[left]==target)
        {
            right=left;
            while (left>-1 && nums[left]==target) left--;
            while (right<length && nums[right]==target) right++;
            ans.push_back(left+1);
            ans.push_back(right-1);
            return ans;
        }
        else
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
    }
};

int main()
{
    Solution ans;
    int a[4]={5,7,7,10};
    vector<int> nums;
    int target=8;

    cout<<ans.searchRange(nums,target)[0]<<ans.searchRange(nums,target)[1];
    return 0;
}