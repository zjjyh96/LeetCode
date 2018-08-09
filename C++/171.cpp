//
// Created by Yinhao Jiang on 2018/8/10.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int n=s.length();
        int ans=0;
        for (int i=0;i<n;i++)
        {
            ans=ans*26+(s[i]-'A'+1);
        }
        return ans;
    }
};

