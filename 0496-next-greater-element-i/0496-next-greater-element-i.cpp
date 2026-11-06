class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();
        stack<int> st;
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            int j = 0;
            while(j < m && nums1[i] != nums2[j])
            {
                j++;
            }
            j++;
            while(j < m)
            {
                if(nums2[j] > nums1[i])
                {
                    st.push(nums2[j]);
                    break;
                }
                j++;
            }
            if(st.empty())
                ans.push_back(-1);
            else
            {
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna