class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char, char> mp1; // s -> t
        unordered_map<char, char> mp2; // t -> s
        
        for (int i = 0; i < s.length(); i++) {
            
            char a = s[i];
            char b = t[i];
            
            // Check s -> t mapping
            if (mp1.find(a) != mp1.end()) {
                if (mp1[a] != b) {
                    return false;
                }
            }
            
            // Check t -> s mapping
            if (mp2.find(b) != mp2.end()) {
                if (mp2[b] != a) {
                    return false;
                }
            }
            
            // Create mappings
            mp1[a] = b;
            mp2[b] = a;
        }
        
        return true;
    }
};