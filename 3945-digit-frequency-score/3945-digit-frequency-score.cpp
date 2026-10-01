class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> freq;
        int sum = 0;
        int d;
        while (n > 0) {
            d = n % 10;
            freq[d]++;
            n = n / 10;
        }
        for(auto i : freq){
            sum += i.first * i.second;
        }
        return sum;
    }
};