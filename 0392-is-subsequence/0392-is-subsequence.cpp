class Solution {
public:
    bool isSubsequence(string s, string t) {
        int si = 0;
        int tj = 0;

        while (si < s.length() && tj < t.length()) {
            if (s[si] == t[tj]) {
                si++;
            }
            tj++;
        }
        return si == s.length();
    }
};