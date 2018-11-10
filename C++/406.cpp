//
// Created by Yinhao Jiang on 2018/11/10.
//

class Solution {
public:
    static bool compare(pair<int,int> a, pair<int,int> b)
    {
        // if (a.first < b.first) return true;
        // if (a.first == b.first && a.second > b.second) return true;
        // return false;
        return (a.first<b.first) || (a.first==b.first && a.second > b.second);
    }

    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        int n=people.size();
        int i,j;
        vector<pair<int,int>> ans(n,pair<int, int>(-1,-1));
        // vector<pair<int,int>> ans;

        sort(people.begin(),people.end(),compare);
        for (i=0;i<n;i++)
        {
            int count=0;
            for(j=0;j<n;j++)
            {
                if (ans[j]==pair<int,int>(-1,-1)) count++;
                if (count==people[i].second+1) break;
            }
            ans[j]=people[i];
        }

        // for (auto& p : people)
        // ans.insert(ans.begin() + p.second, p);
        return ans;
    }

};