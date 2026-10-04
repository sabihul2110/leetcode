class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.empty() || s.size() != goal.size()) return false;
        if (s == goal) return true;
        string sCopy = s;
        int n = s.size();
        while (goal != s) {
            char first = s[0];
            for (int i = 0; i < s.size(); i++) {
                if (i == n - 1) {
                    s[n-1] = first;
                } else {
                    s[i] = s[i+1];
                }
            }
            if (s == sCopy) return false;
        }
        return true;
    }
};
