//
// Created by Yinhao Jiang who is going to UCDavis on 2018/7/22.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numTrees(int n) {
        vector<int> arr(n+1);
        arr[0]=1;
        arr[1]=1;
        for(int i=2;i<=n;i++)
        {
//          left_subtree * right_subtree
            for(int j=0;j<=i-1;j++)
            {
                arr[i]+=arr[j]*arr[i-j-1];
            }
        }
        return arr[n];
    }
};

int main()
{
    Solution ans;
    cout<<ans.numTrees(3)<<endl;
    return 0;
}