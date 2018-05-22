//
// Created by Yinhao Jiang who loves Freda_Ren on 2018/5/22.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int length=0;
        while (i>=0 && s[i]==' ') i--;
//        while (i>=0 && (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        while (i>=0 && s[i]!=' ')
        {
            i--;
            length++;
        }
        return length;
    }
};

int main()
{
    Solution ans;
    cout<<ans.lengthOfLastWord("Hello World   ");
    return 0;
}