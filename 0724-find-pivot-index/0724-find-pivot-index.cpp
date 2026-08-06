class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n, 0);
        vector<int> suf(n, 0);

        pre[0] = 0;
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + nums[i - 1];
        }

        suf[n - 1] = 0;
        for (int j = n - 2; j >= 0; j--) {
            suf[j] = suf[j + 1] + nums[j + 1];
        }

        int i = 0;
        int j = 0;
        while (i < n) {
            if (pre[i] == suf[j]) {
                return i;
            }
            i++;
            j++;
        }
        return -1;
    }
};