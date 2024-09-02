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

int bintonum(string s,int index, int ans){
    if(index<=0){
        return ans;
    }

    ans += pow(2,index) * (s[index]-'0') + bintonum( s, index-1,ans);
    return ans;

}

int main(){
    cout << solve(13) << endl;
}