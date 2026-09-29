class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = x;
        int mode = 0;
        int sum = 0;
        while (x > 0) {

            mode = x % 10;
            sum += mode;
            x = x/10;
        }
        if (n % sum == 0) {
            return sum;
        }
        return -1;
    }
};