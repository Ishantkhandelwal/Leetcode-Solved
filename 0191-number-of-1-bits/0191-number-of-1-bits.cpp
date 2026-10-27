class Solution {
public:
    int hammingWeight(int n) {
        
        int count = 0;
        unsigned int num = n;
        
            string res = "";
            while(num>0){
                if(num%2==1)
                {
                    res+="1";
                }
                if(num%2==0){
                    res+="0";
                }
                num/=2;
            }
            
            int m = res.size();
            for(int i=0;i<m;i++){
                if(res[i]=='1'){
                    count++;
                
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna