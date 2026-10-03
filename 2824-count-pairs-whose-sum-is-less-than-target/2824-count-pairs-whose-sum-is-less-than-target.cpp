class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        // for (int i = 0; i < n; i++) {
        //     for (int j = i+1; j < n; j++) {
        //         if(nums[i] + nums[j] < target){
        //             ans++;
        //         }
        //     }
        // }
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        int i = 0, j = n - 1;
        while (i < j) {
            if (nums[i] + nums[j] < target) {
                ans += (j - i);
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }
};