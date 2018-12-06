//
// Created by Yinhao on 2018/12/5.
//
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& tree) {
        unordered_map<int,int> basket;
        int n=tree.size();
        int start=0;
        int ans=0;
        for (int i=0;i<n;i++)
        {
            basket[tree[i]]++;
            while (basket.size()>2)
            {
                basket[tree[start]]--;
                if (basket[tree[start]]==0) basket.erase(tree[start]);
                start++;
            }
            ans=max(ans,i-start+1);
        }
        return ans;
    }
};

int main()
{
    vector<int> tree={3,3,3,1,2,1,1,2,3,3,4};
    Solution ans;
    ans.totalFruit(tree);
    return 0;
}