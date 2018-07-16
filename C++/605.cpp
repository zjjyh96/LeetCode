//
// Created by Yinhao Jiang on 2018/7/16.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int length=flowerbed.size();
        int i=0;
        int countZero=0;

//        border
        if (length==0)
            if (n==0) return true;
            else return false;

        while (i<length)
        {
            countZero=0;
            while (i<length && flowerbed[i]==0)
            {
                if (i==0) countZero++;
                if (i==length-1) countZero++;
                countZero++;
                i++;
            }
            n-=(countZero-1)/2;
            while (i<length && flowerbed[i]==1) i++;
        }
        if (n<=0) return true;
        else return false;
    }
};