class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                k++;
                j++;
                swap(nums[i],nums[j]);
            }
        }
        return k;
    }
};