class Solution {
public:
    string frequencySort(string s) {
        string stds;
        int hash[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            hash[s[i]]++;
        }
        for (int j = 0; j < 256; j++) {
            int maxFreq = 0;
            int maxIndex = -1;

            for (int i = 0; i < 256; i++) {
                if (hash[i] > maxFreq) {
                    maxFreq = hash[i];
                    maxIndex = i;
                }
            }
            if (maxIndex == -1) break;
            for (int k = 0; k < maxFreq; k++) {
                stds.push_back(maxIndex);
            }

            hash[maxIndex] = 0;
        }
        return stds;
    }
};
