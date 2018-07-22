//
// Created by Yinhao Jiang on 2018/7/22.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
////    Solution 1：
//    int insert(vector<long int> &arr, int num)
//    {
//        for (int i=arr.size()-1;i>=0;i--)
//            if (arr[i]==num)
//                return 0;
//        arr.push_back(0);
//        int i=arr.size()-2;
//        while(arr[i]>num && i>=0)
//        {
//            arr[i+1]=arr[i];
//            i--;
//        }
//        i++;
//        arr[i]=num;
//        return 0;
//    }
//
//    long int nthUglyNumber(int n) {
//        vector<long int> arr;
//        arr.push_back(1);
//        arr.push_back(2);
//        arr.push_back(3);
//        arr.push_back(5);
//        int i=1;
//        while(arr.size()<2*n)
//        {
//            insert(arr,arr[i]*2);
//            insert(arr,arr[i]*3);
//            insert(arr,arr[i]*5);
//            i++;
//        }
//        return arr[n-1];
//    }

////    Solution 2:
    int nthUglyNumber(int n) {
        vector<int> arr;
        arr.push_back(1);
        int x=0,y=0,z=0;
        for(int i=1;i<n;i++)
        {
            if(arr[x]*2<=arr[y]*3 && arr[x]*2<=arr[z]*5 && arr[x]*2>arr.back())
            {
                arr.push_back(arr[x]*2);
            }
            else if(arr[y]*3<=arr[x]*2 && arr[y]*3<=arr[z]*5 && arr[y]*3>arr.back())
            {
                arr.push_back(arr[y]*3);
            }
            else if(arr[z]*5<=arr[y]*3 && arr[z]*5<=arr[x]*2 && arr[z]*5>arr.back())
            {
                arr.push_back(arr[z]*5);
            }

            while (arr[x]*2<=arr.back()) x++;
            while (arr[y]*3<=arr.back()) y++;
            while (arr[z]*5<=arr.back()) z++;
        }
        return arr[n-1];
    }

};

int main()
{
    Solution ans;
//    for(int i=1;i<=100;i++)
        cout<<ans.nthUglyNumber(100)<<endl;
    return 0;
}