class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int l=0;
        int count = 0;
        int r = k-1;
        int sum = 0;
        for(int i =0;i<k;i++)
        {
            sum+=arr[i];
        }

        if (sum >= k * threshold) { 
            count++;
            }

        while(r<n-1)
        {
            sum = sum-arr[l];
            l++;
            r++;

            sum = sum+arr[r];
        if(sum>=k*threshold)
        {
            count++;
        }

        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna