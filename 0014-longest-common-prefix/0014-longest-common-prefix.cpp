class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // If the array is empty, there is no common prefix
        if (strs.empty()) {
            return "";
        }
        
        // Sort the array of strings alphabetically
        sort(strs.begin(), strs.end());
        
        // Get the first and last strings after sorting
        string first = strs.front();
        string last = strs.back();
        
        int i = 0;
        // Compare characters of the first and last string
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }
        
        // Return the matched prefix substring
        return first.substr(0, i);
    }
};