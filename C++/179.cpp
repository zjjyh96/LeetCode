//
// Created by Yinhao Jiang on 2018/10/7.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {

        int n=nums.size();
        vector<string> str;
        for (int i=0;i<n;i++)
        {
            str.push_back(to_string(nums[i]));
        }
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if ((str[i]+str[j])<(str[j]+str[i]))
                {
                    string temp=str[i];
                    str[i]=str[j];
                    str[j]=str[i];
                }
            }
        }
        string ans="";
        for (int i=0;i<n;i++)
            ans=ans+str[i];
        return ans;

    }
};
