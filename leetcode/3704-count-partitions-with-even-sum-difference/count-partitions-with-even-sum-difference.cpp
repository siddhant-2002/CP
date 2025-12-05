class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ls=0;
        int rs=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            rs=rs+nums[i];
        }

        for(int i=0;i<nums.size()-1;i++){
            ls=ls+ nums[i];
            rs=rs-nums[i];

            if((ls-rs)%2==0){
                ans++;
            }
        }
        return ans;
        
    }
};