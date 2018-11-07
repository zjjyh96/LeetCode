//
// Created by Yinhao Jiang on 2018/11/6.
//

class Solution {
public:
    bool isPalindrome(string s)
    {
        int n=s.length();
        for (int i=0;i<n/2;i++)
        {
            if (s[i]!=s[n-i-1])
            {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s)
    {
        int n=s.length();
        if (isPalindrome(s)) return true;
        int index;
        for (int i=0;i<n/2;i++)
        {
            if (s[i]!=s[n-i-1])
            {
                index=i;
                break;
            }
        }
        string temp=s;
        temp.erase(index,1);
        if (isPalindrome(temp)) return true;
        temp=s;
        temp.erase(n-index-1,1);
        if (isPalindrome(temp)) return true;

        return false;
    }
};