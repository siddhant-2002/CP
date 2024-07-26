#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        sort(p.begin(), p.end());

        int ans=0;
        int sum=0;

        int i=0,j=0;


        while(i<n){
            while(j<n && p[j]-p[i]<=1 && sum+p[j]<=m ){
                sum+=p[j];
                j++;
            }
            ans = max(ans,sum);
            sum-=p[i];
            i++;

        }

        cout << ans << endl;
    }
    return 0;
}