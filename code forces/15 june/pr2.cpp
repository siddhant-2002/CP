#include <bits/stdc++.h>
#include <iomanip> // Include this for setprecision
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    double ans = 0;

    for(int i=0;i<n;i++){
        ans+=((double)arr[i]/n);
    }
    cout << fixed << setprecision(12) << ans << endl; // Use fixed and setprecision here
}