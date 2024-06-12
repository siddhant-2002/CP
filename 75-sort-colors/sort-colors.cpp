class Solution {
    void solve(vector<int>&nums){
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[i]){
                    swap(nums[j],nums[i]);
                }
            }
        }
    }
public:
    void sortColors(vector<int>& nums) {
        // map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // int count=0;
        // for(auto it:mp){
        //     for(int i=0;i<it.second;i++){
        //         nums[count]=it.first;
        //         count++;
        //     }
        // }
        solve(nums);
        return;
    }
};