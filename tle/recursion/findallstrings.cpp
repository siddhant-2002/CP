#include <bits/stdc++.h>
using namespace std;

void combinations(string s,set<string>&ans,int idx,vector<bool>used,string temp){
    if(idx == s.size()){
        ans.insert(temp);
        return;
    }

    for(int i=0;i<s.size();i++){
        if(used[i]==false){
            used[i]=true;
            combinations(s,ans, idx+1,used,temp+s[i] );
            used[i]=false;
        }
    }

}

int main(){
    set<string>ans;
    int index=0;
    string s="aabac";
    int n = s.size();
    vector<bool>used(n,false);
    string temp="";

    combinations(s,ans,index,used,temp);
    cout << ans.size() << endl;
    for(auto it:ans){
        cout << it << endl;
    }

}

