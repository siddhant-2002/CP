// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/CHCOINSG

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        
        if(n%6 == 0){
            cout << "Misha" << endl;
        }
        else{
            cout << "Chef" << endl;
        }
    }
	return 0;
}

