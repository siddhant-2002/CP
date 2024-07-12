// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/MAXAGRY

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k >= n / 2) {
        cout << (n * (n - 1)) / 2<<endl;
        return;
    }
 
    int t = n - k * 2;
    cout << (n * (n - 1)) / 2 - (t * (t - 1)) / 2<<endl;
}

signed main() {
    int t;
    cin >> t;
    while(t--){
        solve();
        
    }
	return 0;
}
