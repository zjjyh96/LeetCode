//
// Created by Yinhao Jiang on 2018/11/7.
//
#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string processString(string s){
        int iplus=s.find("+");
        int iat=s.find("@");
        if (iplus!=string::npos && iplus<iat) s.erase(iplus,iat-iplus);
        // cout<<s<<endl;

        int idot=s.find(".");
        iat=s.find("@");
        while (idot!=string::npos && idot<iat)
        {
            s.erase(idot,1);
            idot=s.find(".");
            iat=s.find("@");
        }
        // cout<<s<<endl;
        return s;

    }
    int numUniqueEmails(vector<string>& emails) {
        set<string> ans;
        int n=emails.size();
        for(int i=0;i<n;i++)
        {
            ans.insert(processString(emails[i]));
        }
        return ans.size();
    }
};