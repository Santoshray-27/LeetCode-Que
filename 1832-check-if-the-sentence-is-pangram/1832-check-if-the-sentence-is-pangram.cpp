#include <string>
#include <unordered_set>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        // A pangram must have at least 26 characters
        if (sentence.length() < 26) return false; 
        
        // Insert characters directly into a hash set
        std::unordered_set<char> seen(sentence.begin(), sentence.end());
        
        // If we have 26 unique characters, it's a pangram
        return seen.size() == 26;
    }
};
