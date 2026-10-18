class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        int n = jewels.length();
        int m = stones.length();
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(jewels[i] == stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna