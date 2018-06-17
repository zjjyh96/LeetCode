//
// Created by Yinhao Jiang who is alone on 2018/6/17.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void markIsland(vector<vector<char>>& grid, vector<vector<int>>& tag, int count, int i, int j)
    {
        tag[i][j]=count;
        if (i-1>=0              && grid[i-1][j]=='1' && tag[i-1][j]==0) markIsland(grid,tag,count,i-1,j);
        if (i+1<grid.size()     && grid[i+1][j]=='1' && tag[i+1][j]==0) markIsland(grid,tag,count,i+1,j);
        if (j-1>=0              && grid[i][j-1]=='1' && tag[i][j-1]==0) markIsland(grid,tag,count,i,j-1);
        if (j+1<grid[0].size()  && grid[i][j+1]=='1' && tag[i][j+1]==0) markIsland(grid,tag,count,i,j+1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        if (n==0) return 0;
        int m=grid[0].size();
        int count=0;
        // init tag
        vector<vector<int>> tag(n);
        for (int i=0;i<n;i++) tag[i].resize(m);

        // count islands
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (grid[i][j]=='1' && tag[i][j]==0)
                {
                    count++;
                    markIsland(grid,tag,count,i,j);
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution ans;
    vector<char> m;
    m.push_back('1');
    m.push_back('1');
    m.push_back('0');
    m.push_back('0');
    vector<vector<char>> n;
    n.push_back(m);
    n.push_back(m);

    cout<<ans.numIslands(n);
    return 0;
}