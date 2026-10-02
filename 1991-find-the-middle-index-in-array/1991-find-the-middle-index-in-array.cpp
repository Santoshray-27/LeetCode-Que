class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n =  nums.size();
        vector<int> pre(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + nums[i];
        }
        int totalSum = 0;
        for (auto i : nums) {
            totalSum += i;
        }
        int i = 0;
        while (i < n) {
            int suf = totalSum - pre[i] - nums[i];
            if(suf == pre[i]){
                return i;
            }
            i++;
        }
        return -1;
    }
};