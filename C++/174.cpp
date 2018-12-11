//
// Created by Yinhao Jiang on 2018-12-10.
//
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n=dungeon.size();
        if (n==0) return 0;
        int m=dungeon[0].size();
        vector<vector<int>> health(n,vector<int>(m,0)), lowesthealth(n,vector<int>(m,0));

        lowesthealth[0][0]=health[0][0]=dungeon[0][0];
        for (int i=1;i<n;i++){
            health[i][0]=health[i-1][0]+dungeon[i][0];
            lowesthealth[i][0]=min(health[i][0],health[i-1][0]);
        }

        for (int i=1;i<m;i++){
            health[0][i]=health[0][i-1]+dungeon[0][i];
            lowesthealth[0][i]=min(health[0][i],health[0][i-1]);
        }

        for (int i=1;i<n;i++){
            for (int j=1;j<m;j++){
                int healthup=health[i-1][j]+dungeon[i][j];
                int healthleft=health[i][j-1]+dungeon[i][j];
                if (min(healthup,lowesthealth[i-1][j])>min(healthleft,lowesthealth[i][j-1])){
                    health[i][j]=healthup;
                    lowesthealth[i][j]=min(healthup,lowesthealth[i-1][j]);
                }
                else {
                    health[i][j]=healthleft;
                    lowesthealth[i][j]=min(healthleft,lowesthealth[i][j-1]);
                }
            }
        }

        if (lowesthealth[n-1][m-1]>=0) return 1;
        else return -lowesthealth[n-1][m-1]+1;
    }
};

int main(){
    vector<vector<int>> ans={{1,-3,3},{0,-2,0},{-3,-3,-3}};
    Solution a;
    cout<<a.calculateMinimumHP(ans)<<endl;
    return 0;
}