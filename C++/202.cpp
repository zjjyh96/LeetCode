//
// Created by Yinhao Jiang on 2018/5/16.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int calSquare(int n)
    {
        int sum=0;
        while (n!=0)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow=n,fast=n;
        while (fast!=1)
        {
//          Floyd Cycle detection algorith
            slow=calSquare(slow);
            fast=calSquare(calSquare(fast));
            if (slow==fast && slow!=1) return false;
//            cout<<"Slow"<<slow<<"  Fast"<<fast<<endl;
        }
        return true;
    }
};

int main()
{
    Solution ans;
    cout<<ans.isHappy(19)<<endl;
    return 0;
}

