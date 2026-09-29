class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> numsCopy = nums;
        sort(numsCopy.begin(), numsCopy.end());
        int n = nums.size();

        for (int rotation = 0; rotation < n; rotation++) {

            bool same = true;

            for (int i = 0; i < n; i++) {
                if (numsCopy[i] != nums[i]) {
                    same = false;
                    break;
                }
            }

            if (same) {
                return true;
            }

            int first = numsCopy[0];
            for (int i = 0; i < n - 1; i++) {
                numsCopy[i] = numsCopy[i + 1];
            }
            numsCopy[n - 1] = first;
        }
        return false;
    }
};
