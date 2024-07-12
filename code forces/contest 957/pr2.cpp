#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(k);
        for(int i = 0; i < k; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int ans = 0;

        for(int i = 0; i < k - 1; i++) {
            if(arr[i] > 1) {
                ans += arr[i] - 1;
            }
        }
        for(int i=0; i < k-1; i++) {
            ans+=arr[i];
        }

        cout << ans << "\n";
    }
    return 0;
}
