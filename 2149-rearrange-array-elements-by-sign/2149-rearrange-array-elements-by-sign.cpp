class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // ------BRUTE FORCE APPROCH-------
        // vector<int> pos;
        // vector<int> neg;
        // vector<int> ans;
        // for (auto i : nums) {
        //     if (i > 0) {
        //         pos.push_back(i);
        //     } else {
        //         neg.push_back(i);
        //     }
        // }

        // int iPos = 0;
        // int jNeg = 0;

        // while (iPos < pos.size() && jNeg < neg.size()) {
        //     ans.push_back(pos[iPos]);
        //     ans.push_back(neg[jNeg]);
        //     iPos++;
        //     jNeg++;
        // }
        // return ans;

        // ------OPTIMAL APPROCH : [TWO POINTER'S]-------

        vector<int> ans(nums.size());
        int p = 0, n = 1;
        for (auto num : nums) {
            if (num > 0) {
                ans[p] = num;
                p = p + 2;
            } else {
                ans[n] = num;
                n = n + 2;
            }
        }
        return ans;
    }
};