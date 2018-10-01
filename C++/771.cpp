//
// Created by Yinhao Jiang on 2018/9/30.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int n=S.size();
        int m=J.size();
        int count=0;
        vector<int> map(128);
        for (int i=0;i<m;i++)
        {
            map[J[i]]=1;
        }
        for (int i=0;i<n;i++)
        {
            if (map[S[i]]==1) count++;
        }
        return count;


    }
};
