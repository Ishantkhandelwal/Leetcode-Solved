class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        int start = intervals[0][0];
        int end =  intervals[0][1];
        int count = 0;
        for(int i =1;i<n;i++){
            if(intervals[i][0]<end)
            {
                count++;
                end = min(end, intervals[i][1]);

            }else{
                end = intervals[i][1];
            }
        }
        return count;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna