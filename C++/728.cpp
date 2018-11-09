//
// Created by Yinhao Jiang on 2018/11/8.
//

class Solution {
public:
    bool divideSelf(int n)
    {
        int num=n;
        int d;
        while (num!=0)
        {
            d=num%10;
            if (d==0) return false;
            if (n%d!=0) return false;
            num/=10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i=left;i<=right;i++)
        {
            if (divideSelf(i)) ans.push_back(i);
        }
        return ans;

    }
};