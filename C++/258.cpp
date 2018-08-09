//
// Created by Yinhao Jiang on 2018/8/10.
//


#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num/10>0)
        {
            sum=0;
            while(num>0)
            {
                sum+=num%10;
                num/=10;
            }
            num=sum;
        }
        return num;
    }
};
