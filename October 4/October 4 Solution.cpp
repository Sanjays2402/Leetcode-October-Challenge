class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b)
    {
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        if(intervals.size() == 0)
            return 0;
        
        int n=intervals.size();
        int count=n;
        sort(intervals.begin(), intervals.end(), comp);
        
        vector<int> temp(intervals[0].begin(), intervals[0].end());
        for(int i=1; i<n; i++)
        {
            if( temp[1] >= intervals[i][1] )
                count--;
            else
            {
                temp=intervals[i];
            }
        }
        return count;
    }
};
