class Solution {
public:
    bool isPalindrome(int x) {
        int dup = x;
    long long rev = 0;
    while(x > 0){
        int last_digit = x%10;
        rev = rev*10 + last_digit;
        x/=10;

    }
    
    if(rev == dup){
        return true;
    }else{
        return false;
    }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna