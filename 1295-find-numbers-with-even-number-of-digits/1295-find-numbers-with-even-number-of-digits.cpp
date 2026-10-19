class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int n = nums.size();
            for (int i = 0; i < n; i++) {
        int digits = 0;
        int num = nums[i];
        while (num > 0) {
            digits++;
            num = num / 10;
        }
        if (digits % 2 == 0) {
            count++;
        }
    }

    return count;
}
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna