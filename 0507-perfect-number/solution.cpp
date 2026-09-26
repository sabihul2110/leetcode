class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) {
            return false;
        }
        vector<int> divisors;
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                divisors.push_back(i);
                if ((num/i) != i && (num/i) != num) {
                    divisors.push_back(num/i);
                }
            }
        }
        int x = divisors.size();
        int sum = 0;
        for (int i = 0; i < x; i++) {
            sum = sum + divisors[i];
        }
        return sum == num;

    }
};
