//
// Created by Yinhao Jiang on 2018/8/12.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int left=0,right=n-1;
        while(numbers[left]+numbers[right]!=target) {
            if (numbers[left] + numbers[right] > target) right--;
            else if (numbers[left] + numbers[right] < target) left++;
        }
        vector<int> ans;
        ans.push_back(left+1);
        ans.push_back(right+1);
        return ans;
    }
};

int main()
{
    vector<int> s;
    s.push_back(2);
    s.push_back(7);
    s.push_back(11);
    s.push_back(15);
    Solution ans;
    ans.twoSum(s,9);
}