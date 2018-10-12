//
// Created by Yinhao Jiang on 2018/10/11.
//

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
    int findNearest(vector<int>& heaters, int house,int left, int right)
    {
        int mid=(left+right)/2;
        if (left==right) return right;
        if (left+1==right)
        {
            if (abs(heaters[left]-house)>abs(heaters[right]-house)) return right;
            else return left;
        }

        if (heaters[mid]<house) return findNearest(heaters,house,mid,right);
        else return findNearest(heaters,house,left,mid);
    }
    int findMin(int a,int b,int c)
    {
        if (a<=b && a<=c) return a;
        else if (b<=a && b<=c) return b;
        else return c;

    }

    int findRadius(vector<int>& houses, vector<int>& heaters) {
        std::sort(houses.begin(),houses.end());
        std::sort(heaters.begin(),heaters.end());
        int n=houses.size();
        int m=heaters.size();
        for (int i=0;i<n;i++)
        {
            int index=findNearest(heaters,houses[i],0,m-1);
            // cout<<index<<" ";
            int a=INT_MAX,b=INT_MAX,c=INT_MAX;
            if(index>0) a=abs(heaters[index-1]-houses[i]);
            b=abs(heaters[index]-houses[i]);
            if(index<m-1)c=abs(heaters[index+1]-houses[i]);
            houses[i]=findMin(a,b,c);
            // cout<<houses[i]<<" ";
        }
        int max=0;
        for (int i=0;i<n;i++)
        {
            if (max<houses[i]) max=houses[i];
        }
        return max;
    }
};