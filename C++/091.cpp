//
// Created by Yinhao Jiang on 2018/8/9.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        if (n==0) return 0;

        vector<int> ans(n,0);
        if (n==1)
        {
            if (s[0]=='0') return 0;
            else return 1;
        }
        if (n>=2)
        {

            if (s[1]=='0' && s[0]!='1' && s[0]!='2' || s[0]=='0') return 0;
            else if (s[1]=='0' && (s[0]=='1' || s[0]=='2'))
            {
                ans[0]=1;
                ans[1]=1;
            }
            else if (s[0]=='2' && s[1]<='6' && s[1]!='0' || s[0]=='1' && s[1]!='0')
            {
                ans[0]=1;
                ans[1]=2;
            }
            else if (s[1]!='0' && s[0]>'2' || s[1]>='7' && s[0]=='2')
            {
                ans[0]=1;
                ans[1]=1;
            }

        }
        for (int i=2;i<n;i++)
        {
            if(s[i]=='0' && s[i-1]!='1'&& s[i-1]!='2') return 0;
            else if(s[i-1]=='0' && s[i]!='0') ans[i]=ans[i-1];
            else if(s[i]=='0' && (s[i-1]=='1' || s[i-1]=='2')) ans[i]=ans[i-2];
            else if(s[i-1]=='2' && s[i]<='6' && s[i]!='0' || s[i-1]=='1' && s[i]!='0') ans[i]=ans[i-1]+ans[i-2];
            else if(s[i]!='0' && s[i-1]>'2' || s[i]>='7' && s[i-1]=='2') ans[i]=ans[i-1];

        }
        return ans[n-1];
    }
};

int main()
{
    Solution s;
    cout<<s.numDecodings("226")<<endl;
    return 0;
}