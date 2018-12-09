//
// Created by Yinhao Jiang on 2018-12-09.
//

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int ncoin=coins.size();
        vector<int> ans(amount+1,INT_MAX-1);
        ans[0]=0;
        for (int i=1;i<=amount;i++){
            for (int j=0;j<ncoin;j++){
                if (i>=coins[j]){
                    ans[i]=min(ans[i],ans[i-coins[j]]+1);
                }
            }
        }
        if (ans[amount]==INT_MAX-1) return -1;
        else return ans[amount];
    }
};