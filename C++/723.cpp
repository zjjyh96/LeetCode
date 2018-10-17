//
// Created by Yinhao Jiang on 2018/10/16.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool crush(vector<vector<int>>& board)
    {
        bool sign;
        int height=board.size();
        int width=board[0].size();
        vector<int> temp(width,0);
        vector<vector<int>> flag(height,temp);

        sign=false;
        for(int i=0;i<height;i++)
        {
            for (int j=0;j<width-2;j++)
            {
                if (board[i][j]!=0 && board[i][j]==board[i][j+1] && board[i][j]==board[i][j+2])
                {
                    flag[i][j]=1;
                    flag[i][j+1]=1;
                    flag[i][j+2]=1;
                    sign=true;
                }
            }
        }
        for(int j=0;j<width;j++)
        {
            for (int i=0;i<height-2;i++)
            {
                if (board[i][j]!=0 && board[i][j]==board[i+1][j] && board[i][j]==board[i+2][j])
                {
                    flag[i][j]=1;
                    flag[i+1][j]=1;
                    flag[i+2][j]=1;
                    sign=true;
                }
            }
        }
        for(int j=0;j<width;j++)
        {
            int pointer=height-1;
            for (int i=height-1;i>=0;i--)
            {
                if (flag[i][j]==1) continue;
                board[pointer][j]=board[i][j];
                pointer--;
            }
            for (int i=pointer;i>=0;i--)
            {

                board[i][j]=0;
            }
        }
        return sign;
    }

    vector<vector<int>> candyCrush(vector<vector<int>>& board)
    {
        while (crush(board));
        return board;
    }
};};