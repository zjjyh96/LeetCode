//
// Created by Yinhao Jiang on 2018/5/9.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]=='(' || s[i]=='[' || s[i]=='{') stack.push_back(s[i]);
            if (s[i]==')' || s[i]==']' || s[i]=='}')
            {
                if (stack.empty()) return false;
                if ((s[i]==')' && stack.back()=='(')||(s[i]==']' && stack.back()=='[')||(s[i]=='}' && stack.back()=='{')) stack.pop_back();
                else return false;
            }
        }
        if (stack.empty()) return true;
        else return false;
    }
};

int main()
{
    Solution ans;
    cout<<ans.isValid("{[]}{[]}");
    return 0;
}

