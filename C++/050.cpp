//
// Created by Jinfee on 2018/5/3.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        int flag;
        if (n==-2147483648) return(1.0/(myPow(x,2147483647)*x));
        if (n>0) flag=1;
        else
        {
            n=-n;
            flag=-1;
        }
        vector<int> binary;
        vector<double> table;
        table.push_back(x);
        binary.push_back(n%2);
        n=n/2;
        while (n>0)
        {
            binary.push_back(n%2);
            table.push_back(table.back()*table.back());
            n=n/2;
        }
        double ans=1;
        for (int i=0;i<binary.size();i++)
        {
            if (binary[i]==1) ans*=table[i];
        }
        if (flag==1) return ans;
        else return (1.0/ans);

    }
};

int main()
{
    Solution obj;
    cout<<obj.myPow(2, -2147483648);
}