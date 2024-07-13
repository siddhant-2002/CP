class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int len=0;
        int i=0;
        int j=0;
        int zero=0;

        while(j<n){
            if(nums[j]==0)
            zero++;
            while(zero>k){
                if(nums[i]==0){
                    zero--;
                }
                i++;
            }
            if(zero<=k){
                len = max(len,j-i+1);
            }
            j++;
        }
        return len;
    }
};