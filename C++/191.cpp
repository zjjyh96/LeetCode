//
// Created by Yinhao Jiang who loves Freda_Ren as a friend on 2018/5/26.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while (n>0)
        {
            ans+=n%2;
            n/=2;
        }
        return ans;
    }
};