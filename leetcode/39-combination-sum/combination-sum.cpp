class Solution {
public:

    void solve(vector<int>& candidates, int target, int ind, vector<int> &result, vector<vector<int>> &ans) {
        if(ind == candidates.size() || target < 0) {
            return;
        }
        if(target == 0) {
            ans.push_back(result);
            return;
        }

        
        result.push_back(candidates[ind]);
        solve(candidates, target - candidates[ind], ind, result, ans);
        result.pop_back();
        solve(candidates, target, ind + 1, result, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int ind = 0;
        vector<int> result;
        vector<vector<int>> ans;

        solve(candidates, target, ind, result, ans);

        return ans;

    }
};