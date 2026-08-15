class Solution { 
public: 
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int count = 0;

        // 1. Skip any trailing spaces at the end of the string
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // 2. Count the characters of the last actual word
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    } 
};
