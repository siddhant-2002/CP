class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0, end = 0;
        int zeroCount = 0;
        int maxlength = 0;

        while (end < nums.size()) {

            if (nums[end] == 0) {
                zeroCount++;
            }

            while (zeroCount > k) {
                if (nums[start] == 0) {
                    zeroCount--;
                }
                start++;
            }

            maxlength = max(maxlength, end - start + 1);
            end++;
        }

        return maxlength;
    }
};
