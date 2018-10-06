//
// Created by Yinhao Jiang on 2018/10/5.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNext(vector<int> arr, int last)
    {
        int n=arr.size();
        int diff=INT_MAX;
        int index=-1;
        for (int i=0;i<n;i++)
        {
            if (arr[i]>last && (arr[i]-last)<diff)
            {
                diff=arr[i]-last;
                index=i;
            }
        }
        return index;

    }
    int nextGreaterElement(long n) {
        vector<int> arr;
        int digit=n%10;
        n/=10;
        arr.push_back(digit);
        while (n>0 && n%10>=digit)
        {
            digit=n%10;
            arr.push_back(digit);
            n/=10;
        }
        if (n==0) return -1;

        int last=n%10;
        n/=10;
        int indexSwap=findNext(arr,last);
        int temp=arr[indexSwap];
        arr[indexSwap]=last;
        last=temp;

        n=n*10+last;
        std::sort(arr.begin(),arr.end());
        for (int i=0;i<arr.size();i++)
        {
            n=n*10+arr[i];
        }

        if (n>2147483647) return -1;
        return n;

    }
};