//
// Created by Yinhao Jiang on 2018/10/15.
//

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        vector<int> ans(n,0);
        if (n==1) return true;
        if (bits[0]==1) ans[0]=0;
        else ans[0]=1;
        if (n>1)
        {
            if (bits[0]==0 && bits[1]==0) ans[1]=1;
            if (bits[0]==1 && bits[1]==0) ans[1]=1;
            if (bits[0]==0 && bits[1]==1) ans[1]=0;
            if (bits[0]==1 && bits[1]==1) ans[1]=1;
        }

        for (int i=2;i<n-1;i++)
        {
            if(bits[i]==0 && ans[i-1]==1 ) ans[i]=1;
            else if(bits[i]==0 && bits[i-1]==1 && ans[i-2]==1) ans[i]=1;
            else if(bits[i]==1 && bits[i-1]==1 && ans[i-2]==1) ans[i]=1;
        }
        if (ans[n-2]==1) return true;
        else return false;
    }
};