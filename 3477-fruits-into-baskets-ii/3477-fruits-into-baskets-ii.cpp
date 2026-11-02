class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

        int n = fruits.size();
        int count = 0;

        for(int i = 0; i < n; i++) {

            bool placed = false;

            for(int j = 0; j < n; j++) {

                if(baskets[j] >= fruits[i]) {

                    baskets[j] = 0; 
                    placed = true;
                    break;
                }
            }

            if(placed == false) {
                count++;
            }
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna