class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1;
        int high = num;
        while(low<=high){
            long long mid = low + (high - low) / 2;
            if(mid*mid == num){
                return true;
            }else if(mid*mid<num){
                low=mid+1;
            }else{
                high = mid-1;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna