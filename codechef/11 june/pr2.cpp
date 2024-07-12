// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/UNQEQ


#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i; 
        }
        if(sum%2!=0) cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=1;i<=n/4;++i) cout<<i<<" ";
            for(int i=((3*n)/4)+1;i<=n;++i) cout<<i<<" ";
            cout<<"\n";
            for(int i=n/4+1;i<=((3*n)/4);++i) cout<<i<<" ";
            cout<<"\n";
        }
        
    }
	return 0;
}
