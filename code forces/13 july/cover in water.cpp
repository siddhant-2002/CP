// https://codeforces.com/problemset/problem/1900/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >>s;

        int count=0;

        int dot=0;

        for(int i =0;i<n;i++){
            if(count>=3){
                break;
            }
            else{
                if(s[i]=='.'){
                    count++;
                    dot++;
                }
                else{
                    count=0;
                }
            }
        }

        if(count >=3){
            cout << 2 << endl;
        }
        else{
            cout <<dot<<endl;
        }
    }
}