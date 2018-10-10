//
// Created by Yinhao Jiang on 2018/10/9.
//

#include <iostream>
#include <vector>
using namespace std;

//Solution 1: brute force
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nums(heights);
        int n=heights.size();
        int max=0;
        for (int i=0;i<n;i++)
        {
            if (i!=0 && heights[i]==heights[i-1]) continue;
            int left=i,right=i;
            while (left>=0 && heights[left]>=heights[i]) left--;
            while (right<n && heights[right]>=heights[i]) right++;
            left++;
            right--;
            int size=(right-left+1)*heights[i];
            if (max<size) max=size;
        }
        return max;
    }
};
