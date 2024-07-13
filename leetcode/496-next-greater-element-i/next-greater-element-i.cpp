class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>ans;
        stack<int>s;
        vector<int>v(nums1.size());

        for(int i=nums2.size()-1;i>=0;i--){
            
            while(!s.empty() && s.top() <= nums2[i]){
                s.pop();
            }
            ans[nums2[i]] = s.empty() ? -1 : s.top();
            
            s.push(nums2[i]);
        }

        for(int i=0;i<nums1.size();i++){
            v[i] = ans[nums1[i]];
        }
        return v;

    }
};