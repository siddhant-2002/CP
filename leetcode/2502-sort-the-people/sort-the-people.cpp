class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>mp;
        vector<string>ans;
        for(int i=0;i<heights.size();i++){
            mp[heights[i]]=names[i];
        }
        for(auto it:mp){
            ans.insert(ans.begin(),it.second);
        }
        return ans;
    }
};