class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int n = nums.size();
        long long product = 1;
        int count = 0;

        if (k <= 1) {
            return 0;
        }

        while (r < n) {
            product *= nums[r];

            while (product >= k) {
                product /= nums[l];
                l++;
            }

            count += r - l + 1;
            r++;
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna