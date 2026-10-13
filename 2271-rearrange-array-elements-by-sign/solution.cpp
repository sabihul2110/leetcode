class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ansArr(n, 0);
        int posIndex = 0;
        int negIndex = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                ansArr[posIndex] = nums[i];
                posIndex+=2;
            } else {
                ansArr[negIndex] = nums[i];
                negIndex+=2;
            }
        }
        return ansArr;
    }
};
