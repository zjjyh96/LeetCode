//
// Created by 蒋印豪 on 2018/11/8.
//

class Solution {
public:
    string toLowerCase(string str) {
        int n=str.length();
        for (int i=0;i<n;i++)
        {
            if('A'<=str[i] && str[i]<='Z') str[i]=str[i]-'A'+'a';
        }
        return str;
    }
};