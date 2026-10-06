class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto x : nums){
            st.insert(x);
        }
        int ans = 0;
        for(auto x : st){
            if(st.find(x - 1) == st.end()){
                int current = x;
                int count = 1;
                while(st.find(current+1) != st.end()){
                    current++;
                    count++;
                }
                ans = max(count,ans);
            }
        }
        return ans;
    }
};