class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxi = 0;
        int ans = 0;
        for (auto i : nums) {
            freq[i] = freq[i] + 1;
            // freq[i]++;
        }

        for (auto j : freq) {
            if (j.second > maxi) {
                maxi = j.second;
            }
        }

        for(auto k : freq){
            if(k.second == maxi){
                ans += maxi;
            }
        }
        return ans;
    }
};