//
// Created by Yinhao Jiang on 2018/7/10.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
// Solution 1:
//        int n=height.size();
//        int max=0;
//        int size=0;
//        for (int i=0;i<n-1;i++)
//        {
//            for (int j=i+1;j<n;j++)
//            {
//                size=(j-i)*min(height[i],height[j]);
//                if(size>max) max=size;
//            }
//        }
//        return max;

// Solution 2
        int i=0;
        int j=height.size()-1;
        int max=0;
        int size=0;
        while (i<j)
        {
            size=min(height[i],height[j])*(j-i);
            if (size>max) max=size;
            if (height[i]<height[j]) i++;
            else j--;
        }
        return max;
    }
};

int main()
{
    Solution ans;
    cout<<ans.maxArea()<<endl;
    return 0;
}