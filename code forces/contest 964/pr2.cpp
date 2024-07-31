#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        string s;
        cin >> s;

        vector<pair<char, int>> v;
        for (int i = 1; i <= size; ++i) {
            v.push_back({s[i-1], i});
        }

        int ans = 0;
        while (v.size() > 1) {
            bool found = false;
            for (int j = 0; j < (int)v.size() - 1; ++j) {
                if ((v[j].first == '(' && v[j + 1].first == '_') || 
                    (v[j].first == '_' && v[j + 1].first == ')')) {
                    ans += (v[j + 1].second - v[j].second);
                    v.erase(v.begin() + j);
                    v.erase(v.begin() + j);
                    found = true;
                    break; // Restart the search as the vector size has changed
                }
            }
            if (!found) break; // If no pairs are found, exit the loop
        }
        cout << ans << endl;
    }
    return 0;
}
