class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        int longest = 1;
        int n = nums.size();

        if(n == 0){
            return 0;
        }

        sort(nums.begin(),nums.end());

        for(int i = 0;i<n-1;i++){
            if(nums[i+1] - nums[i] == 1){
                count++;
            }
            else if(nums[i+1] == nums[i]){
                continue;
            }
            else{
                count = 1;
            }

            if(count > longest){
                longest = count;
            }
        }

        return longest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna