class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (auto i : nums) {
            int count = 0;
            while (i != 0){
                i /= 10;
                count++;
            }
            if(count % 2 == 0){
                sum ++;
            }
        }
        return sum;
    }
};