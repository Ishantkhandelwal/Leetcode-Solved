class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int n = nums.size();
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                count++;
            }
        }
        int result = n - count;
        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna