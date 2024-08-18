#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;

        string s = to_string(a);
        int n =s.size();

        if(s[0]!='1'){
            cout << "NO" << endl;
        }
        else{
            if(s[0]=='1' && s[1]=='0'){
                if(s[2]=='1' && n>3){
                    cout <<   "YES" << endl;
                }
                else if(s[2]>='2'){
                    cout <<   "YES" << endl;
                }
                else{
                    cout <<  "NO" << endl;
                }
                
            }
            else{
                cout <<  "NO" << endl;
            }
        }
    }
}