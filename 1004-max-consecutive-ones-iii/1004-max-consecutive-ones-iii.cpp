class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l =0;
        int count =0;
        int ans =0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==0){
             count++;
            }
            while(count>k){
                if(nums[l]==0){
                    count--;
                }
                l++;
            }
        ans = max(ans,i-l+1);
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna