//
// Created by 蒋印豪 on 2018/11/22.
//

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    static bool compare(Interval a, Interval b)
    {
        return a.start<b.start;
    }
    vector<Interval> merge(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        vector<Interval> ans;
        int n=intervals.size();
        int left,right;
        for(int i=0;i<n;i++)
        {
            left=intervals[i].start;
            right=intervals[i].end;
            while (i<n-1 && right>=intervals[i+1].start)
            {
                i++;
                right=max(right,intervals[i].end);
            }
            ans.push_back(Interval(left,right));
        }
        return ans;
    }
};