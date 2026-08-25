class Solution {
public:
    int countDigits(int x) {
        int count = 0;
        int orig = x;
        while (x > 0) {
            int val = x % 10;
            x /= 10;
            if (orig % val == 0) {
                count++;
            }
        }
        return count;
    }
};