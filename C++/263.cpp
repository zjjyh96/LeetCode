//
// Created by Yinhao Jiang on 2018/5/16.
//

#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int num) {
        if (num==0) return false;
        while (num%2==0) num/=2;
        while (num%3==0) num/=3;
        while (num%5==0) num/=5;
        if (num==1) return true;
        else return false;
    }
};