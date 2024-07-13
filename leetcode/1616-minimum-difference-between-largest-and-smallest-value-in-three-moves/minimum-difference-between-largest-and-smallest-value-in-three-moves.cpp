class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if (n <= 4) return 0; // If the array has 4 or fewer elements, the minimum difference is 0 after removing any 3 elements.

        // Sort the array to simplify the difference calculation
        sort(nums.begin(), nums.end());
        
        // Initialize the result with a large value
        int result = INT_MAX;

        // Calculate and compare the possible differences after removing three elements
        result = min(result, nums[n-4] - nums[0]);
        result = min(result, nums[n-3] - nums[1]);
        result = min(result, nums[n-2] - nums[2]);
        result = min(result, nums[n-1] - nums[3]);
        
        return result;
    }
};
