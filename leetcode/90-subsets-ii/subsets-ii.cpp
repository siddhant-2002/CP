class Solution {
    void solve(int index, vector<int>&temp, vector<vector<int>>&ans,vector<int>& nums, int n){
        if(index == n){
            if(find(ans.begin(),ans.end(),temp) == ans.end()){
                ans.push_back(temp);
            }
            return;
        }
        solve(index+1, temp, ans, nums,n);
        temp.push_back(nums[index]);
        solve(index+1, temp, ans, nums,n);
        temp.pop_back();
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        int i = 0;
        vector<int>temp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        solve(i,temp,ans,nums,n);
        return ans;
    }
};