//
// Created by Yinhao Jiang on 2018/5/17.
//
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int findPalindromeOdd(string s,int n)
    {
        int step=1;
        while (n-step>=0 && n+step<s.size() && s[n-step]==s[n+step]) step++;
        step--;
        return step;
    }
    int findPalindromeEven(string s,int n)
    {
        int step=1;
        while (n-step>=0 && n+step-1<s.size() && s[n-step]==s[n+step-1]) step++;
        step--;
        return step;
    }

    string longestPalindrome(string s) {
        int maxsublength=0,sublength,step;
        int start=0;
        for (int i=0;i<s.size();i++)
        {
//            try odd palindrome
            step=findPalindromeOdd(s,i);
            sublength=step*2+1;
            if (sublength>maxsublength)
            {
                start=i-step;
                maxsublength=sublength;
            }
//            try even palidrome
            step=findPalindromeEven(s,i);
            sublength=step*2;
            if (sublength>maxsublength)
            {
                start=i-step;
                maxsublength=sublength;
            }
        }
        return s.substr(start,maxsublength);
    }
};

int main()
{
    Solution ans;
    cout<<ans.longestPalindrome("cbbbbbbbd");
}