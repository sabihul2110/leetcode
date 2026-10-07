class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> numsN = nums;
        numsN.insert(numsN.end(), nums.begin(), nums.end());

        vector<int> result(
            numsN.begin() + (n - k),
            numsN.end() - k
        );
        nums = result;
    }
};
