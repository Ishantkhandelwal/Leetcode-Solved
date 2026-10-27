class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for (int i = 0; i <= n; i++) {
            int num = i;
            string res = "";
            while (num > 0) {
                if (num % 2 == 1) {
                    res += '1';
                } else {
                    res += '0';
                }
                num /= 2;
            }
            int count = 0;
            for (int j = 0; j < res.size(); j++) {
                if (res[j] == '1') {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna