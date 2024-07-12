// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/CHEFDINE

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k; // Read n and k values first

        vector<int> a(n);
        vector<int> b(n);
        
        // Read the array 'a'
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        // Read the array 'b'
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        map<int, int> mp;

        // Populate the map with the minimum value from b for each unique value in a
        for(int i = 0; i < n; i++){
            if(mp.find(a[i]) == mp.end()) {
                mp[a[i]] = b[i];
            } 
            else {
                if(mp[a[i]] > b[i]) {
                    mp[a[i]] = b[i];
                }
            }
        }
        
        vector<int> arr(mp.size());
        
        int idx = 0;
        for(auto it : mp){
            arr[idx] = it.second;
            idx++;
        }

        if(k > mp.size()){
            cout << -1 << endl;
        }
        else{
            sort(arr.begin(),arr.end());
        
        int sum=0;
        
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        
        cout << sum << endl;
        
        
            // int i = 0;
            // int j = 0;
            // int sum = 0;
            // int mini = LLONG_MAX;
            
            // while(j < arr.size()){
            //     sum += arr[j];
                
            //     if(j - i + 1 == k){
            //         mini = min(sum, mini);
            //         sum -= arr[i];
            //         i++;
            //     }
            //     j++;
            // }
            // cout << mini << endl;
        }
    }
    return 0;
}
