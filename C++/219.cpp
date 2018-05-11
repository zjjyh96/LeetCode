//
// Created by Yinhao Jiang on 2018/5/11.
//
#include <iostream>
#include <vector>
using namespace std;

// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         for (int i=0;i<nums.size();i++)
//         {
//             for (int j=1;j<=k;j++)
//             {
//                 if (i-j>=0 && i-j<nums.size() && nums[i-j]==nums[i]) return true;
//                 if (i+j>=0 && i+j<nums.size() && nums[i+j]==nums[i]) return true;
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = m.find(nums[i]);
            if (it != m.end() && i - it->second <= k) return true;
            m[nums[i]] = i;
        }
        return false;
    }
};