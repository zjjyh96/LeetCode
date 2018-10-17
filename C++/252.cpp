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
    static bool myCompare(Interval a, Interval b)
    {
        return (a.start<b.start);
    }

    bool canAttendMeetings(vector<Interval>& intervals) {
        int n=intervals.size();
        std::sort(intervals.begin(),intervals.end(),myCompare);
//        for (int i=0;i<n-1;i++)
//        {
//            for (int j=i+1;j<n;j++)
//            {
//                if (intervals[i].start>intervals[j].start)
//                {
//                    int start=intervals[i].start;
//                    int end=intervals[i].end;
//                    intervals[i].start=intervals[j].start;
//                    intervals[i].end=intervals[j].end;
//                    intervals[j].start=start;
//                    intervals[j].end=end;
//                }
//            }
//        }
        for (int i=0;i<n-1;i++)
        {
            if (intervals[i+1].start<intervals[i].end) return false;
        }
        return true;

    }
};