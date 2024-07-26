#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n ;
        cin >> n ;

        vector <int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(),greater<int>());

        int ct=0;
        bool ans=false;

        for(int i=0;i<n;i++){
            if(i==0 || a[i]==a[i-1]){
                ct++;

            }
            else{
                if(ct&1){
                    ans=true;
                }
                ct=1;
            }
        }

        if(ct&1){
            ans=true;
        }

        cout << (ans ?"YES" : "NO" )<< endl;
        
    }
    return 0;
}
