//
// Created by Yinhao Jiang on 2018/5/16.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int length=s.size();
        int i=0,j=length-1;
        while (i<length && j>=0 && i<=j)
        {
            if(!(s[i]>='0' && s[i]<='9' || s[i]>='a' && s[i]<='z' )) i++;
            if(!(s[j]>='0' && s[j]<='9' || s[j]>='a' && s[j]<='z' )) j--;
            if((s[i]>='0' && s[i]<='9' || s[i]>='a' && s[i]<='z' )&&(s[j]>='0' && s[j]<='9' || s[j]>='a' && s[j]<='z' ))
                if (s[i]!=s[j]) return false;
                else
                {
                    i++;
                    j--;
                }
        }
        return true;

    }
};