class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for (int i = 0; i < strs[0].size(); i++) {
            char currentChar = prefix[i];
            for (int j = 1; j < strs.size(); j++) {
                if (i == strs[j].size() || currentChar != strs[j][i]) {
                    return prefix.substr(0, i);
                }
            }
        }
        return prefix;
    }
};
