//
// Created by Yinhao Jiang on 2018/9/30.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string alienOrder(vector<string>& words) {
        vector<int> map(26,-1);
        int n=words.size();
        string a,b;
        for (int i=0;i<n-1;i++)
        {
            a=words[i];
            b=words[i+1];
            int length=min(a.length(),b.length());
            int j=0;
            while (j<length && a[j]==b[j]) j++;
            if (j==length) continue;
            else
            {
                if (map[a[j]-'a']==-1) map[a[j]-'a']==b[j]-'a';
                else
                {
                    int temp=map[a[j]-'a'];
                    map
                }
            }
        }
    }
};