//
// Created by Yinhao Jiang who is working hard on his thesis and loving Freda_ren on 2018/5/28.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> num(n,true);
        int count=0;
        for (int i=2;i<n;i++)
        {
            if (num[i]== true)
            {
                count++;
                int j=i*2;
                while (j<n)
                {
                    num[j]=false;
                    j=j+i;
                }
            }
        }
        return count;
    }
};


int main()
{
    Solution ans;
    cout<<ans.countPrimes(10);
    return 0;
}