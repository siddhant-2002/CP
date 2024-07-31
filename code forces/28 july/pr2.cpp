
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int ans=0;
        for(int i=1;i<=n;i++){
            int count=0;
            int temp=i;
            while(temp>0){
                int a = temp%10;

                if(a!=0)count++;

                temp=temp/10;
            }
            if(count<=1)ans++;
                
        }
        cout << ans << endl;
    }
}