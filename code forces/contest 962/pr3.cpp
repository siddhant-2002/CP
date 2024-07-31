#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        string a, b;
        cin >> a >> b;

        vector<pair<int, int>> queries(q);

        for (int i = 0; i < q; i++) {
            cin >> queries[i].first >> queries[i].second;
        }

        for (int i = 0; i < q; i++) {
            int count = 0;
            int l = queries[i].first - 1; // Convert to 0-based index
            int r = queries[i].second - 1; // Convert to 0-based index

            string a_sub = a.substr(l, r - l + 1);
            string b_sub = b.substr(l, r - l + 1);

            unordered_map<char, int> count_a, count_b;

            for (char c : a_sub) {
                count_a[c]++;
            }

            for (char c : b_sub) {
                count_b[c]++;
            }

            for (auto it = count_a.begin(); it != count_a.end(); ++it) {
                char c = it->first;
                int count_a_c = it->second;
                int count_b_c = count_b[c];
                count += abs(count_a_c - count_b_c);
            }

            
            cout << count << endl;
        }
    }
    return 0;
}