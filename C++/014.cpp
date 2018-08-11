//
// Created by Yinhao Jiang on 2018/8/12.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string compareTwo(string a, string b)
    {
        if (a=="" || b=="") return "";
        int na,nb;
        na=a.length();
        nb=b.length();
        if (na>nb)
        {
            swap(na,nb);
            swap(a,b);
        }
        int i=0;
        while(i<na && a[i]==b[i]) i++;
        return a.substr(0,i);
    }

    string longestCommonPrefix(vector<string>& strs) {
        string common;
        int n=strs.size();
        if (n==0) return "";
        common=strs[0];
        for (int i=1;i<n;i++)
        {
            common=compareTwo(common,strs[i]);
            if (common=="") return "";
        }
        return common;

    }
};