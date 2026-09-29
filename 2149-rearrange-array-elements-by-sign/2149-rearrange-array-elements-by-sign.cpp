class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        for (auto i : nums) {
            if (i > 0) {
                pos.push_back(i);
            } else {
                neg.push_back(i);
            }
        }

        int iPos = 0;
        int jNeg = 0;

        while (iPos < pos.size() && jNeg < neg.size()) {
            ans.push_back(pos[iPos]);
            ans.push_back(neg[jNeg]);
            iPos++;
            jNeg++;
        }
        return ans;
    }
};