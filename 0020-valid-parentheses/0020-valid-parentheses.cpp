class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        int n = s.length();

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(' ||
               s[i] == '{' ||
               s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()) return false;

                char ch = st.top();
                st.pop();

                if((s[i] == ')' && ch != '(') ||
                   (s[i] == '}' && ch != '{') ||
                   (s[i] == ']' && ch != '['))
                {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna