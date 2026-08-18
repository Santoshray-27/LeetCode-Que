class Solution {
public:
    int addDigits(int num) {
        if (num == 0)
            return 0;
        if (num % 9 == 0)
            return 9;
        return num % 9;

        // agar kisi bhi number ka single digit sum nikalna ho to us number ko %
        // 9 kar do for example if i have to find the single digit sum of this
        // num  = 38
        // 1 -> 3+8 = 11
        // 2 -> 1+1 = 2
        // return 2 <- anss...
        // 38 % 9 = 2
        // process of module operator (%) : 9*4 = 36 -> 36-38 = 2 this is our
        // reminder so this is answer..
    }
};