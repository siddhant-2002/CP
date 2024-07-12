#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        int profit = 0;

        for(int i = 0; i < n; i++){
            if(b > a){
                b =b-i;
                profit += b;
                
            }
            else{
                profit += a;
            }
        }
        cout << profit << endl;
    }
    return 0;
}
