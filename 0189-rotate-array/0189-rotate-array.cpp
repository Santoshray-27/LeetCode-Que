class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> tempArr(n);
        for (int i = 0; i < n; i++) {
            tempArr[((i + k) % n)] = nums[i];
        }
        nums = tempArr;
    }
};