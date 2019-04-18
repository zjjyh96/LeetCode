//
// Created by 蒋印豪 on 2019-04-18.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> splitWords(string &S){
        vector<string> words;
        while(S.find(' ') != string::npos){
            int index = S.find(' ');
            words.push_back(S.substr(0,index));
            S = S.erase(0, index+1);
        }
        words.push_back(S);
        return words;
    }

    string toGoatLatin(string &S) {
        string vowels = "aeiouAEIOU";
        vector<string> words = splitWords(S);
        for (int i=0; i<words.size(); i++){
            if (vowels.find(words[i][0]) != string::npos){
                words[i] += "ma";
            }
            else {
                char ch = words[i][0];
                words[i].erase(0,1);
                words[i] += ch;
                words[i] += "ma";
            }
            for (int j=0; j<=i; j++){
                words[i] += "a";
            }
        }
        string res = "";
        for (int i=0; i<words.size()-1; i++){
            res += words[i];
            res.append(" ");
        }
        res.append(words[words.size()-1]);
        return res;
    }
};

int main(){
    Solution ans;
    string s = "I speak Goat Latin";
    cout<<ans.toGoatLatin(s);
    return 0;
}