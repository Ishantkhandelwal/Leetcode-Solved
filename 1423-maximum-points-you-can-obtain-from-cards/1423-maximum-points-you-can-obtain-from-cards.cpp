class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        int l=0;
        int r=n-1;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }
        int max_sum = sum;
        for(int i =0;i<k;i++)
        {
            sum=sum-cardPoints[k-1-l];
            sum=sum+cardPoints[n-1-l];
            l++;
            max_sum=max(max_sum,sum);

        }

        return max_sum;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna