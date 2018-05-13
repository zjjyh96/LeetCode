//
// Created by Yinhao Jiang on 2018/5/13.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int length;
        vector<int> table(26);
        if (s.size()!=t.size()) return false;
        else length=s.size();
        for (int i=0;i<length;i++)
        {
            table[s[i]-'a']++;
            table[t[i]-'a']--;
        }
        for (int i=0;i<26;i++)
            if (table[i]!=0) return false;
        return true;
    }
};

int main()
{
    string s,t;
    s="cat";
    t="acta";
    Solution ans;
    cout<<ans.isAnagram(s,t);
}

