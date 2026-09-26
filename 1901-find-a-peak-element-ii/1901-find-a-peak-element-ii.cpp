class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m - 1;
        while(low < high)
        {
            int mid = low + (high - low)/2;
            int row = 0;

            for(int i = 1; i < n; i++){
                if(mat[i][mid] > mat[row][mid]){
                    row = i;
                }
            }

            if(mat[row][mid] < mat[row][mid+1]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        int row = 0;
        for(int i = 1; i < n; i++){
            if(mat[i][low] > mat[row][low]){
                row = i;
            }
        }
        return {row, low};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna