#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n ,k;
        cin >> n >> k;

        if(n<k){
            cout << 0 << endl;
        }
        else{
            int ans=0;
            while(n<k){
                n=n-k;
                ans++;
            }
            if(n){
                ans++;
            }
            if(n==1){
                ans = ans+ans-1;
            }
            else{
                ans+=ans;
            }
            cout << ans << endl;
        }
        
    }
    return 0;
}
