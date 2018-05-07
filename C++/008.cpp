//
// Created by Yinhao Jiang on 2018/5/7.
//

#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        int start=0,end=0;
        int length=str.size();
        long int ans=0;
        int flag=1;
        while (start<length && str[start]==' ') start++;
        if (str[start]!='+' && str[start]!='-' && (str[start]>'9' || str[start]<'0')) return 0;
        if (str[start]=='-')
        {
            start++;
            flag=-1;
        }
        else if (str[start]=='+') start++;
        while (start<length && str[start]=='0') start++;
        end=start;
        while (end<length && str[end]>='0' && str[end]<='9') end++;

        if (end-start>11)
            if (flag==-1) return INT_MIN;
            else return INT_MAX;

        for(int i=start;i<end;i++)
        {
            ans=ans*10+int(str[i]-'0');
        }
        ans=ans*flag;
        if(ans<INT_MIN) return INT_MIN;
        if(ans>INT_MAX) return INT_MAX;
        return ans;
    }
};

int main()
{
    Solution ans;
    cout<<ans.myAtoi("   -0000000000123123   asdasd");
}