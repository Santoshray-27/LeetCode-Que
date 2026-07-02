class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j) {
            int sum = numbers[i] + numbers[j];

            if (sum == target) {
                return {i + 1, j + 1}; // Return 1-based indices directly
            } else if (sum < target) {
                i++; // If the sum is small, move the left pointer right
            } else {
                j--; // If the sum is large, move the right pointer left
            }
        }

        return {};
    }
};
