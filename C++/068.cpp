//
// Created by Yinhao Jiang on 2018/9/30.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int n=words.size();
        int curLen=0;
        int widLeft=maxWidth;
        vector<string> ans;
        string curRow="";
        int i=0;
        while (i<n)
        {
            int j=i;
            widLeft=maxWidth;
            while (j<n && words[j].length()<=widLeft )
            {
                widLeft=widLeft-(words[j].length()+1);
                j++;
            }
//            如果不是最后一行的话
            if (j<n)
            {

//                计算剩余的空格数
                int nSpace=(widLeft+(j-i));
                if (j-i-1==0)
                {
                    curRow+=words[i];
                    for (int m=0;m<nSpace;m++) curRow+=" ";
                }

                else {
                    int eachSpace=nSpace/(j-i-1);
                    vector<int> space(j-i-1,eachSpace);
                    int leftSpace=nSpace-eachSpace*(j-i-1);
                    int l=0;
//                把空格数存入vector space
                    while (leftSpace>0)
                    {
                        space[l]++;
                        leftSpace--;
                        l++;
                    }
//                插入该行的字母
                    for (int k=i;k<j-1;k++)
                    {
                        curRow+=words[k];
                        for (int m=0;m<space[k-i];m++) curRow+=" ";
                    }
                    curRow+=words[j-1];
                }

                ans.push_back(curRow);
                curRow="";
                i=j;
            }

            else if (j==n)
            {
                int nSpace=(widLeft+(j-i));
                for (int k=i;k<j-1;k++)
                {
                    curRow+=words[k];
                    curRow+=" ";
                    nSpace--;
                }
                curRow+=words[j-1];
                for (int m=0;m<nSpace;m++) curRow+=" ";
                ans.push_back(curRow);
                curRow="";
                i=j;
            }
        }
        return ans;
    }
};

