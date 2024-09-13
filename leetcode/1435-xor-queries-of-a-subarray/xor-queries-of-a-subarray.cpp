class Solution {
public:
    int xoor(int l, int r,vector<int>& arr){
        int ans=0;
        for(int i=l;i<=r;i++){
            ans = (arr[i] ^ ans);
        }
        return ans;
    }
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;

        for (auto it : queries){
           int a = xoor(it[0],it[1],arr);
           ans.push_back(a);
        }

        return ans;


    }
};