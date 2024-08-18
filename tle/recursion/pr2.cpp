#include <bits/stdc++.h>
using namespace std;

string solve(int n){
    if(n==0){
        return "0";
    }

    string s = solve(n/2);

    if(n%2==0){
        return s + "0";
    }else{  
        return s + "1";
    }
}


int main(){
    cout << solve(13) << endl;
}