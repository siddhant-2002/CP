#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<vector<char>> arr(n, vector<char>(n));

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        vector<vector<char>> ans(n/k, vector<char>(n/k));

        
        for (int i = 0; i < n/k; i++) {
            for (int j = 0; j < n/k; j++) {
                ans[i][j] = arr[i*k][j*k];
            }
        }

        
        for (int i = 0; i < n/k; i++) {
            for (int j = 0; j < n/k; j++) {
                cout << ans[i][j];
            }
            cout << endl; 
        }
    }
    return 0;
}