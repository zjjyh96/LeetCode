//
// Created by 蒋印豪 on 2018/10/1.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string str)
    {
        int n=str.length();
        int i=0;
        while (i<n/2)
        {
            if (str[i]!=str[n-i-1]) return false;
            i++;
        }
        return true;
    }

    vector<vector<int>> palindromePairs(vector<string>& words) {
        int n=words.size();
        vector<vector<int>> ans;

        for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (i==j) continue;
                if (words[i]!="" && words[j]!="" && words[i][0]!=words[j][words[j].length()-1]) continue;
                if (isPalindrome(words[i]+words[j]))
                {
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                }
            }
        }
        return ans;

    }
};