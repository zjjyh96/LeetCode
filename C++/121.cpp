//
// Created by Yinhao Jiang on 2018/8/10.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0) return 0;
        int minPrice=prices[0];
        int maxPro=0;

        for(int i=0;i<n;i++)
        {
            minPrice=minPrice>prices[i]?prices[i]:minPrice;
            maxPro=maxPro<(prices[i]-minPrice)?(prices[i]-minPrice):maxPro;
        }
        return maxPro;
    }
};