//
// Created by 蒋印豪 on 2019-04-17.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> zigzag;
        if (numRows == 1) return s;

        int n = s.length();
        int index = 0;
        vector<char> row;
        int flag = 1;
        int x = 0, y = 0;
        while (index < n) {
            // if it is forward putting
            if (x == 0) flag = 1;
            if (flag == 1) {
                vector<char> tmp;
                int cRow = numRows;
                while (index < n && cRow > 0) {
                    tmp.push_back(s[index]);
                    cRow--;
                    index++;
                }
                while (index == n && cRow > 0) {
                    tmp.push_back(' ');
                    cRow--;
                }
                zigzag.push_back(tmp);
                flag = -1;
                x = numRows-2;
                y++;
            }
                // if it is backward putting
            else {
                vector<char> tmp(numRows, ' ');
                tmp[x] = s[index];
                zigzag.push_back(tmp);
                index++;
                y++;
                x--;
            }
        }
//        y--;
        string ans="";
        for (int i=0; i<numRows; i++){
            for (int j=0; j<y; j++){
                if (zigzag[j][i] != ' ') ans+=zigzag[j][i];
            }
        }
        return ans;

    }
};

int main(){
    Solution ans;
    cout<<ans.convert("AB", 1)<<endl;
    return 0;
}