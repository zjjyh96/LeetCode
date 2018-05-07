//
// Created by Yinhao Jiang on 2018/5/7.
//
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
//        change int to string to compare characters
        string copy=to_string(x);
        int length=copy.size();
        for (int i=0;i<length/2;i++)
        {
            if (copy[i]!=copy[length-i-1]) return false;
        }
        return true;

    }
};

int main()
{
    Solution s;
    cout<<s.isPalindrome(10);
    return 0;
}