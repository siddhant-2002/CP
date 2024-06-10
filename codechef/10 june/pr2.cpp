// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/DECREM?tab=statement

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        
        if(l==1 || l<=r/2){
            cout << -1 << endl;
        }
        else{
            cout << r << endl;
        }
    }
	return 0;
}
