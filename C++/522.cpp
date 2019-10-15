//
// Created by 蒋印豪 on 2019-04-19.
//
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    /**
     * @param strs: List[str]
     * @return: return an integer
     */
    int findLUSlength(vector<string> &strs) {
        // write your code here
        unordered_map<string, int> freqs;
        for (int i=0; i<strs.size(); i++){
            for (int j=0; j<strs[i].length(); j++){
                for(int k=1; k<=strs[i].length()-j; k++){
                    string sub = strs[i].substr(j,k);
                    freqs[sub]++;
                }
            }
        }
        int ma = -1;
        for(auto iter:freqs) {
//            cout<< ma<<endl;
//            cout << iter.second << " "<< iter.first.length()<<endl;
            if (iter.second == 1 && (int)iter.first.size() > ma) {
//                cout<< "hehe"<<endl;
            }
        }
        return ma;
    }
};

int main(){
    Solution ans;
    vector<string> strs;
    strs.push_back("aaa");
    strs.push_back("aev");
    strs.push_back("eae");

    cout<<ans.findLUSlength(strs);
    return 0;
}
