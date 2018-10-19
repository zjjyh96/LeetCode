//
// Created by Yinhao Jiang on 2018/10/18.
//

class Solution {
public:
    int findComplement(int num) {
        int count=0,sum=1,n=num;
        while (num>0)
        {
            num/=2;
            sum*=2;
        }
        return sum-n-1;
    }
};