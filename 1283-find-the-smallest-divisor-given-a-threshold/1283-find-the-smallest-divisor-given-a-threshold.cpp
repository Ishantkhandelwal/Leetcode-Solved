class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int mid = (low+high)/2;
            int sum = 0;
            for(int x:nums)
            {
                sum+=(x+mid-1)/mid;
            }
            if(sum<=threshold){
                high = mid-1;
            }else{
                low=mid+1;
            }
        }
        
        return low;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna