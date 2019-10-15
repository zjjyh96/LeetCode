//
// Created by Yinhao Jiang on 2018/10/29.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int S, int T) {
        int n=routes.size();
        vector<vector<int>> bus(n,vector<int>(n,-1));
        // sort the bus stops for later search
        for(int i=0;i<n;i++) std::sort(routes[i].begin(),routes[i].end());
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                bool flag=false;
                for(int p=0;p<routes[i].size();p++)
                {
                    for(int q=0;q<routes[j].size();q++)
                    {
                        if (routes[i][p]==routes[j][q])
                        {
                            flag=true;
                            break;
                        }
                    }
                    if (flag==true)
                    {
                        bus[i][j]=1;
                        bus[j][i]=1;
                        break;
                    }
                }
            }
        }

    }
};