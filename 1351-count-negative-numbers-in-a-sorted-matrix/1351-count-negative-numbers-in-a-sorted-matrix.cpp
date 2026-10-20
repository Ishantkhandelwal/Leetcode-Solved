class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int low = 0;
        int high = n-1;
        int count = 0;
        while(low<=high){
            long long mid = low+ (high-low)/2;
            for(int i =0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j] < 0){
                        count++;
                    }else{
                        high = mid-1;
                    }
                }
            }
            low = mid+1;
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna