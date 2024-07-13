class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind=-1;
        int n=nums.size();

        //obs 1 : find the breakpoint so that small element can be replaced with just greater element from it righter part
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        //obs 2 : now from end traverse to ind+1 and find just greater element than arr[ind]
        for(int i=n-1;i>ind;i--)
        {
            if(nums[i]>nums[ind])
            {
                swap(nums[i],nums[ind]);
                break;
            }
        }
        //as from ind+1 to n our whole motive is to make is as small as possible so they are already in sorted order so just reverse that portion
        reverse(nums.begin()+ind+1,nums.end());

        
    }
};