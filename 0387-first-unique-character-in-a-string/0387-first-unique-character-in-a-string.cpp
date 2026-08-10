class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int> mp;

        // Step 1: Count frequency of each character
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        // Step 2: Find the first character whose frequency is 1
        for (int i = 0; i < s.length(); i++) {
            if (mp[s[i]] == 1) {
                return i;
            }
        }

        // No unique character found
        return -1;
    }
};