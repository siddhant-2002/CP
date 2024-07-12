#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;

    string s;
    cin >>s;

    while(t--){
        for(int i=0;i<n-1;i++){ // change s.length() to n-1
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i],s[i+1]);
                i++; // increment i to avoid rechecking the pair that was just swapped
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << s[i];
    }
}