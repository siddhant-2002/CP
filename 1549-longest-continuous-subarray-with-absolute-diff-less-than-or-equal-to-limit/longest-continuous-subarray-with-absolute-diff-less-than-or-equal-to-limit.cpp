#pragma GCC optimize("03")
static int __star = []{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
    return 0;
}();
class Solution {
public:
    int longestSubarray(vector<int>& v, int k) {
        multiset<int> s;
        int j=0,ans=1;
        for(int i=0;i<v.size();i++)
        {
            s.insert(v[i]);
            
            while(*s.rbegin()-*s.begin()>k)
            {
                s.erase(s.find(v[j]));
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};