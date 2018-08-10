//
// Created by Yinhao Jiang on 2018/8/10.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
////    The trick is that count zeros = count 2*5
////    2s are definitely more than 5s, which makes count 5 is enough
//    int trailingZeroes(int n) {
//        int count2=0,count5=0,temp;
//        if (n<0) n=-n;
//        for (int i=1;i<=n;i++)
//        {
//            temp=i;
//            while(temp%2==0)
//            {
//                temp/=2;
//                count2++;
//            }
//            while(temp%5==0)
//            {
//                temp/=5;
//                count5++;
//            }
//        }
//        return count2<count5?count2:count5;

// There is a faster way to count 5
    int trailingZeroes(int n) {
        int ans=0;
        while (n>0)
        {
            ans+=n/5;
            n/=5;
        }
        return ans;
    }
};

int main()
{
    Solution ans;
    cout<<ans.trailingZeroes(1808548329)<<endl;
    return 0;
}