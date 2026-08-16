class Solution {
public:
    bool isPalindrome(int x) {

        // Step 1 : Edge Case :
        if(x  <  0  ||  x == 10 ) return false;

       // Step 2 : Reverse A Number
        int X=x; // Store actual number for Compare After reverse.
        int ans = 0;

        // Step 3 :
         while( x > 0 ){
            int D = x % 10;
            if(ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return false;
            }
            ans=ans*10 + D;
            x/=10;
         }

         // Step 4 : 
          return X==ans;
    }
};