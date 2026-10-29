class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        int l = 0;
        int r = k-1;
        for(int i =0;i<k;i++){
            sum+=nums[i];
        }

        double max_sum = sum;
        while(r<n-1)
        {
            sum = sum - nums[l];
            l++;
            r++;
            sum = sum+nums[r];
            max_sum = max(max_sum,sum);
        }

        return max_sum/k;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna