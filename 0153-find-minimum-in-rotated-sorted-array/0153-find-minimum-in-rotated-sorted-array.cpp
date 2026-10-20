class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<high){
            long long mid = low+(high-low)/2;
            if(nums[mid]>nums[high]){
                low=mid+1;
            }else{
                high = mid;
            }
        }
        return nums[low];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna