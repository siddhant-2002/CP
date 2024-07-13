class Solution {
    int solve(vector<int>& nums){
        int low=0;
        int high=nums.size()-1;

        if(nums.size()==1){
            return nums[0];
        }

        while(low<=high){
            int mid = (low+high)/2;
            if(mid == 0){
                if(nums[mid+1]!=nums[mid]){
                    return nums[mid];
                }
            }
            if(mid == nums.size()-1){
                if(nums[mid-1]!=nums[mid]){
                    return nums[mid];
                }
            }
            if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid]){
                return nums[mid];
            }
            //left side is sorted correctly
            if((mid % 2 == 0 && nums[mid]==nums[mid+1])||(mid%2!=0 && nums[mid]==nums[mid-1])){

                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
public:
    int singleNonDuplicate(vector<int>& nums) {
        return solve(nums);
    }
};