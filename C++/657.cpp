//
// Created by Yinhao Jiang on 2018/11/8.
//

class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.length();
        int vertical=0,horizontal=0;
        for(int i=0;i<n;i++)
        {
            if (moves[i]=='U') vertical++;
            else if (moves[i]=='D') vertical--;
            else if (moves[i]=='L') horizontal++;
            else if (moves[i]=='R') horizontal--;
        }
        if (vertical==0 && horizontal==0) return true;
        else return false;
    }
};