//
// Created by 蒋印豪 on 2018/12/2.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;



/*
 * Complete the 'missingWords' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 */

int printVec(vector<string> ans){
    for (int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
vector<string> splitString(string str){
    int len=str.length();
    int end=0;
    int start=0;
    vector<string> res;
    while (end<len)
    {
        while (end<len && str[end]!=' ') end++;
        if (end!=start) res.push_back(str.substr(start,end-start));
        start=end+1;
        end++;
    }
    return res;
}

vector<string> missingWords(string s, string t) {
    vector<string> swords=splitString(s);
    printVec(swords);
    vector<string> twords=splitString(t);
    printVec(twords);
    vector<string> ans;
    int tlen = twords.size(), slen = swords.size();
    int tindex = 0, sindex = 0;
    while(tindex<tlen && sindex<slen)
    {
        if (swords[sindex]==twords[tindex]){
            sindex++;
            tindex++;
        }
        else{
            ans.push_back(swords[sindex]);
            sindex++;
        }
    }
    while(sindex<slen && tindex==tlen)
    {
        ans.push_back(swords[sindex]);
        sindex++;
    }
    return ans;
}

int main()
{
    vector<string> ans;
    string a="I am using hackerrank to improve programming";
    string b="am hackerrank to improve";
    ans=missingWords(a,b);
    printVec(ans);
    return 0;
}
