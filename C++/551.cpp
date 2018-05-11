//
// Created by Yinhao Jiang on 2018/5/11.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int counta=0,countl=0;
        for (int i=0;i<s.size();i++)
        {
            switch (s[i])
            {
                case 'A':
                    counta++;
                    if(counta>1) return false;
                    break;
                case 'L':
                    countl++;
                    if(countl>2 && s[i-1]=='L' && s[i-2]=='L') return false;
                    break;
            }
        }
        return true;
    }
};