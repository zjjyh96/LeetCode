//
// Created by Yinhao Jiang on 2019-04-17.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> splitWords(string s){
        vector<string> words;
        while(s.find(' ') != string::npos){
            int index = s.find(' ');
            if (index != 0) words.push_back(s.substr(0,index));
            s.erase(0,index+1);
        }
        if (s != "") words.push_back(s);
        return words;
    }
    string reverseWords(string s) {
        string ans;
        if (s == "") return "";
        vector<string> words = splitWords(s);
        int n = words.size();
        for (int i=n-1; i>0; i--) {
            ans.append(words[i]);
            ans.append(" ");
        }
        if (n != 0) ans.append(words[0]);
        return ans;
    }
};

int main(){
    Solution ans;
    cout<<ans.reverseWords(" ");
    return 0;
}