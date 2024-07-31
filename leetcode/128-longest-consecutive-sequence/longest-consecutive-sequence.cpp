class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int ans = 1;
        int maxi = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] == nums[i]) continue; // Skip duplicates

            if (nums[i + 1] == nums[i] + 1) {
                ans++;
            } else {
                maxi = max(ans, maxi);
                ans = 1; // Reset for a new sequence
            }
        }

        maxi = max(ans, maxi); // Compare the last sequence

        return maxi;
    }
};