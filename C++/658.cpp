//
// Created by Yinhao Jiang on 2018/10/17.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findBinary(vector<int>& arr, int left, int right, int target)
    {
        int mid=(left+right)/2;
        if (left>=right) return right;
        if (arr[mid]==target) return mid;
        if (arr[mid]>target) return findBinary(arr,left,mid-1,target);
        if (arr[mid]<target) return findBinary(arr,mid+1,right,target);

    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int index=findBinary(arr,0,n-1,x);
        // cout<<index<<endl;
        vector<int> ans;
        int left=index-1,right=index;
        if(left<0 && right<0) right=0;
        if(left>n-1 && right>n-1) left=n-1;
        while (k>0)
        {
            if (left<0)
            {
                for (int i=right;i<right+k;i++)
                {
                    ans.push_back(arr[i]);
                    // cout<<i<<" right "<<arr[i]<<endl;
                }
                k=0;
            }
            else if (right>=n)
            {
                for (int i=left;i>=left-k+1;i--)
                {
                    ans.insert(ans.begin(),arr[i]);
                    // cout<<i<<" left "<<arr[i]<<endl;
                }
                k=0;
            }
            else if (left>=0 && right<n && abs(arr[left]-x)<=abs(arr[right]-x))
            {
                ans.insert(ans.begin(),arr[left]);
                // cout<<"left "<<arr[left]<<endl;
                left--;
            }
            else if (right<n && left>=0 && abs(arr[right]-x)<=abs(arr[left]-x))
            {
                ans.push_back(arr[right]);
                // cout<<"right "<<arr[right]<<endl;
                right++;
            }
            k--;
            // cout<<"k "<<k<<endl;
        }
        // std::sort(ans.begin(),ans.end());
        return ans;
    }
};