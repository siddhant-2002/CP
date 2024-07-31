#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        string temp="";
        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                s[i]='(';
                count++;
            }
            else if(s[i]==')'){
                s[i]=')';
                count--;
            }
            else{
                if(count>0){
                    s[i]=')';
                    count--;
                }
                else{
                    s[i]='(';
                    count++;
                }
            }
        }


        stack<int>st;
        int ans=0;

        for(int i=0; i<n; ++i){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                if (!st.empty()) { 
                    ans += i - st.top();
                    st.pop();
                }
            }
        }
        cout << ans << endl;
    }
}