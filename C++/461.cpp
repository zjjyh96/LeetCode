//
// Created by Yinhao Jiang on 2018/7/17.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int dis=0;
        while(x!=0 || y!=0)
        {
            if ((x%2)!=(y%2)) dis++;
            x/=2;
            y/=2;
        }
        return dis;
    }
};