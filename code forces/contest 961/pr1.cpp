#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        int count=0;

        int c=1;

        while(k!=0){
            c++;
            if(k-n>=0){
                k-=n;
                count++;
                if(c==2){
                    c=0;
                    n--;
                }
            }
            else{
                count++;
                break;
                
            }
            
            
        }
        cout << count << endl;
        
    }
	return 0;
}