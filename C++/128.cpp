//
// Created by Yinhao Jiang on 2018/11/5.
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int findlength(map<int,int> &hash, vector<int>& nums,int num)
    {
            int length=1;
            int temp=num-1;
            hash[num]=0;
            num++;
            while(hash[num]==1)
            {
                    // cout<<"num "<<num<<" ";
                    length++;
                    hash[num]=0;
                    num++;
            }

            while(hash[temp]==1)
            {
                    // cout<<"temp "<<temp<<" ";
                    length++;
                    hash[temp]=0;
                    temp--;
            }

            return length;
    }
    int longestConsecutive(vector<int>& nums) {
            int n=nums.size();
            map<int,int> hash;
            for(int i=0;i<n;i++)
            {
                    hash[nums[i]]=1;
            }
            int length=0,max=0;
            for(int i=0;i<n;i++)
            {
                    length=findlength(hash,nums,nums[i]);
                    // cout<<length<<endl;
                    if (length>max) max=length;
            }
            return max;
    }
};