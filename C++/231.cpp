//
// Created by Yinhao Jiang who still loves Freda_Ren on 2018/5/27.
//

#include <iostream>
using namespace std;

//class Solution {
//public:
//    bool isPowerOfTwo(int n) {
//        if (n<=0) return false;
//        while (n>0)
//        {
//            if (n==1) return true;
//            if (n%2==1) return false;
//            n=n/2;
//        }
//        return true;
//    }
//};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<0) return false;
        int num=n^0;
        int ans=0;
        for (int i=0;i<32;i++)
        {
            ans+=(num>>i)&1;
        }
        if (ans==1) return true;
        else return false;
    }
};