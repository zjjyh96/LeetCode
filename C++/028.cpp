//
// Created by Yinhao Jiang on 2018/5/18.
//
#include <iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        bool isTrue;
        if (haystack=="" && needle=="") return 0;
        if (haystack.size()<needle.size()) return -1;
        for (int i=0;i<haystack.size()-needle.size()+1;i++)
        {
            isTrue=true;
            for (int j=0;j<needle.size();j++)
            {
                if (haystack[i+j]!=needle[j])
                {
                    isTrue=false;
                    break;
                }
            }
            if (isTrue) return i;
        }
        return -1;
    }
};

int main()
{
    Solution ans;
    cout<<ans.strStr("a","a");
    return 0;
}