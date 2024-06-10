// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/AVGARR

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--){
        // int n,x;
        // cin >> n >> x;
        
        // int sum=0;
        // for(int i=1;i<n;i++){
        //     cout << i << " ";
        //     sum+=i;
        // }
        
        // cout << (n*x)-sum   << endl;
        
        int n,x,mid,i;
        
		cin>>n;
        cin>>x;
        
        mid=n / 2;
        
        if (n%2)
        {
            cout<<x<<" ";
        }
        
        for (i=1;i<mid+1;i++)
        {
            cout<<x-i<<" "<<x+i<<" ";
        }
        
        cout<<endl;
    }
	return 0;
}
