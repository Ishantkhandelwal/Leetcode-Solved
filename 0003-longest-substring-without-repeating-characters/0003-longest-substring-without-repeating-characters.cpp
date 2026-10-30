class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int max_len = 0;

        string sub = "";
        for(int i =0;i<n;i++)
        {
            int hash[256] = {0};
            for(int j=i;j<n;j++)
            {
                if(hash[s[j]]==1) break;
                hash[s[j]] = 1;
                int len = j-i+1;
                max_len=max(len,max_len);

            }
        }
        return max_len;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna