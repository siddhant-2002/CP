// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/EQUALITY

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int>v(n);
        int sum = 0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            sum+=v[i];
        }
      
        
        int a = sum/(n-1);
        
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            cout <<a-v[i] << " ";
            
        }
        
        cout << endl;
    }
	return 0;
}
