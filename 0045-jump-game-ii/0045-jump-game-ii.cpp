class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
       int jumps=0;
       int end = 0;
       int fart = 0;
       for(int i=0;i<n-1;i++){
        fart = max(fart,i+nums[i]);
       
       if(i==end){
        jumps++;
         end = fart;
       }
       }
       return jumps;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna