#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int j=0;

        int maxi=0;
        int sum=0;
        int count=0;

        while(j<n){
            if(a[j]>maxi){
                sum+=maxi;
                maxi=a[j];
            }
            else{
                sum+=a[j];
            }
            
            if(sum == maxi){
                count++;
            }
            j++;
        }
        cout << count << endl;
        
        
    }
	return 0;
}