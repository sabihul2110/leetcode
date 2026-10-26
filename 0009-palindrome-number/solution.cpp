class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long revNum = 0;
        int temp = x;
        while (temp > 0) {
            int lastDigit = temp % 10;
            revNum = (revNum * 10) + lastDigit;
            temp = temp / 10;
        }
        return x == revNum;
    }
};
