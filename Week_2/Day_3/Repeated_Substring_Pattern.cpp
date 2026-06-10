class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int len = 1; len <= n / 2; len++) {
            if (n % len != 0) continue;

            int i = len;

            for (; i < n; i++) {
                if (s[i] != s[i - len]) break;
            }

            if (i == n) return true;
        }

        return false;
    }
};
