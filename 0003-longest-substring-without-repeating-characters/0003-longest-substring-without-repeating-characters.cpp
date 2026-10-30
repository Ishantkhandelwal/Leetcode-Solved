class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_set<char> st;
        int n = s.length();
        int l=0;
        int max_len = 0;
        for(int i =0;i<n;i++)
        {
            while(st.find(s[i])!=st.end()){
                st.erase(s[l]);
                
            l++;
            }
            st.insert(s[i]);
            max_len=max(max_len,i-l+1);
        }
        return max_len;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna