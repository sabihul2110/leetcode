class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // Step 1: Sort so the closest numbers are next to each other
        sort(nums.begin(), nums.end());
        
        int left = 0;
        int maxFreq = 0;
        long long windowSum = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            windowSum += nums[right];
            
            long long windowSize = right - left + 1;
            long long target = nums[right];
            long long operationsNeeded = (windowSize * target) - windowSum;
            
            while (operationsNeeded > k) {
                windowSum -= nums[left];
                left++;
                
                windowSize = right - left + 1;
                operationsNeeded = (windowSize * target) - windowSum;
            }
            
            if (windowSize > maxFreq) {
                maxFreq = windowSize;
            }
        }
        
        return maxFreq;
    }
};

