#include <bits/stdc++.h>
 
using namespace std;
#define int long long
 
void solve() {
	int n; cin >> n;
    vector<int> a(n);

    int mini=INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(abs(a[i]) < mini) {
            mini = a[i];
        }
    }

    cout << mini << endl;




}
 
signed main() {
	// int tt; cin >> tt; while (tt--) {solve();}
    solve();
}
