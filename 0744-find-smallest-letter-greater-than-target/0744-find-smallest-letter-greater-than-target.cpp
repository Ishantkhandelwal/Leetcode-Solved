class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            long long mid = low + (high-low)/2;
            if(letters[mid] > target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return letters[low%n];
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna