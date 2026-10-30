class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
        int l = 0;
        int max_len = 0;
        for(int r = 0; r < s.length(); r++) {
            if(last[s[r]] >= l) {
                l = last[s[r]] + 1;
            }
            last[s[r]] = r;
            max_len = max(max_len, r - l + 1);
        }

        return max_len;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna