//
// Created by Yinhao Jiang on 2018/11/8.
//

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size();
        int left=0;
        int right=n-1;
        while(left<right)
        {
            while(left<right && A[left]%2==0) left++;
            if (A[left]%2==1)
            {
                swap(A[left],A[right]);
                right--;
            }
            // for (int i=0;i<n;i++) cout<<A[i]<<" ";
            // cout<<"left="<<left<<",right="<<right<<endl;

        }
        return A;
    }
};