class Solution {
public:
    bool isPalindrome(string s) {
        string cleanedString = "";
        for (char c : s) {
            if (isalnum(c)) {
                cleanedString += tolower(c);
            }
        }

        int left = 0;
        int right = cleanedString.length() - 1;
        while (left <= right) {
            if (cleanedString[left] != cleanedString[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
