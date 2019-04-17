//
// Created by Yinhao Jiang on 2019-04-17.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool buddyStrings(string &A, string &B) {
        // Write your code here
        vector<char> chA, chB;
        vector<int> hash(26,0);
        if (A.length() != B.length()) return false;

        int n = A.length();
        for (int i=0; i<n; i++){
            if (A[i] != B[i]) {
                chA.push_back(A[i]);
                chB.push_back(B[i]);
            }
        }
        if (chA.size() == 2 && chB.size() == 2 &&
            chA[0] == chB[1] && chA[1] == chB[0] ) return true;
        else if (chA.size() == chB.size() && chA.size() == 0) {
            for (int i=0; i<n; i++){
                hash[A[i]-'a']++;
                if (hash[A[i]-'a'] == 2) return true;
            }
        }
        return false;
    }
};