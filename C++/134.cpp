//
// Created by Yinhao Jiang on 2018/10/6.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int sum=;
        for(int i=0;i<n;i++)
        {
            gas[i]-=cost[i];
            sum+=gas[i];
        }
        if (sum<0) return -1;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for (j=0;j<n;j++)
            {
                sum+=gas[(i+j)%n];
                if (sum<0) break;
            }
            if (sum>=0) return i;
        }
        return -1;
    }
};