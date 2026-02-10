class Solution {
public:
    void helper(vector<vector<int>> &ans, int i, int n,vector<int>arr,vector<int>&nums){
        if(i>=n){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[i]);
        helper(ans,i+1,n,arr,nums);
        arr.pop_back();
        helper(ans,i+1,n,arr,nums);
        return;
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int>arr;
        helper(ans,0,n,arr,nums);
        return ans;
    }
};