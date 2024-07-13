class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans = "";
        int n = num.length();

        for(int i = 0; i < n; i++) {
            while(ans.length() > 0 && ans.back() > num[i] && k > 0) {
                ans.pop_back();
                k--;
            }
            // Ensure leading zeros are not pushed to the result
            if(!ans.empty() || num[i] != '0') {
                ans.push_back(num[i]);
            }
        }

        // If there are still digits to remove, remove from the end
        while(k > 0 && !ans.empty()) {
            ans.pop_back();
            k--;
        }

        // If all characters are removed, return "0"
        if(ans.empty()) {
            return "0";
        }
        return ans;
    }
};