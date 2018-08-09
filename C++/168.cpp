//
// Created by Yinhao Jiang on 2018/8/10.
//

#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        char ch;
        while (n!=0)
        {
            n-=1;
            ch=char(n%26+'A');
            ans=ch+ans;
            n=n/26;
        }
        return ans;
    }
};