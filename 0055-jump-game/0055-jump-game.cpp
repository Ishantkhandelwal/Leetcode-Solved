class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n =nums.size();
       int max_idx=0;
       for(int i =0;i<n;i++)
       {
        if(i>max_idx){
        return false;
        }
        max_idx = max(max_idx,i+nums[i]);
       }
       return true;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna