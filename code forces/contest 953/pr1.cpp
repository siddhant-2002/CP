#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n); 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int max = *max_element(arr.begin(),arr.end()-1);

        cout << max + arr[n-1] << endl;
        
    }
    return 0;
}
