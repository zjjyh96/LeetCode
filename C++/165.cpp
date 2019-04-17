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
    vector<int> splitVersion(string version) {
        vector<int> v;
        while (version.find('.') != string::npos){
            int index = version.find('.');
            string tmp = version.substr(0, index);
            v.push_back(std::stoi(tmp));
            version.erase(0, index+1);
        }
        v.push_back(std::stoi(version));
        return v;
    }

    int compareVersion(string version1, string version2) {
        vector<int> v1, v2;
        v1 = splitVersion(version1);
        v2 = splitVersion(version2);
        int index = 0;
        while (index<v1.size() && index<v2.size() ) {
            if (v1[index] < v2[index]) return -1;
            else if (v1[index] > v2[index]) return 1;
            index++;
        }
        if (index == v1.size() && index == v2.size()) return 0;
        else if (index == v1.size()) {
            while (index < v2.size() && v2[index] == 0) index++;
            if (index == v2.size()) return 0;
            else return -1;
        }
        else if (index == v2.size()) {
            while (index < v1.size() && v1[index] == 0) index++;
            if (index == v1.size()) return 0;
            else return 1;
        }

        return 0;
    }
};

int main(){
    Solution ans;
    cout<<ans.compareVersion("1.1","0.1");
    return 0;
}