class Solution {
    bool allzero(map<char,int>mp){
        for (auto it : mp){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }

    bool helper(map<char,int> mp, string s2, int left, int right){
        for(int i=left;i<right;i++){
            if(mp.find(s2[i])!=mp.end()){
                mp[s2[i]]--;
            }
        }
        return allzero(mp);
    }
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> mp;
        if(s1.size()>s2.size()){
            return false;
        }
        for(auto it:s1){
            mp[it]++;
        }
        int left=0;
        int right=s1.size();

       bool ans = helper(mp,s2,left,right);

        for(int i=right;i<s2.size();i++){
            if(ans==true){
                return ans;
            }
            else{
                left+=1;
                right+=1;
                ans = helper(mp,s2,left,right);
            }
        }
        return ans;
        
    }
};