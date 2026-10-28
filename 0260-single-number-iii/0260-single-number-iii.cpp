class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i =0;i<n;i++){
            int count =0;
            for(int j=0;j<n;j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if (count == 1) {

                ans.push_back(nums[i]);

            }
        }
        

        return ans;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna