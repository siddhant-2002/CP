#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int maxi=0;
        for(int i=0;i<n;i+=2){
            maxi = max(maxi,v[i]);
        }
        cout << maxi << endl;
    }
}