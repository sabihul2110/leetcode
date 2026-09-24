class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        string original = to_string(x);
        string reversedStr = original;
        reverse(reversedStr.begin(), reversedStr.end());
        return original == reversedStr;
    }
};

