//
// Created by Yinhao Jiang on 2018/5/7.
//
#include <iostream>
#include <limits.h>
using namespace std;

class Solution {
public:
    int reverse(long int x) {
        if (x==-2147483648) return 0;
        int flag=1;
        long int ans=0;
        if (x<0)
        {
            x=-x;
            flag=-1;
        }
        while(x>0)
        {
            ans=ans*10+x%10;
            x=x/10;
        }
        ans=ans*flag;
        if (ans>INT_MIN && ans<INT_MAX) return ans;
        else return 0;
    }
};

int main()
{
    Solution obj;
    cout<<obj.reverse(-123);
    return 0;
}