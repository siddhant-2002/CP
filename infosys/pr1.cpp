#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int e;
    cin >> e;

    vector<int> power(n);
    for(int i = 0; i < n; i++){
        cin >> power[i];
    }

    vector<int>bonus(n);
    for(int i = 0; i < n; i++){
        cin >> bonus[i];
    }

    vector<int>visited(n,0);

    int count=0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(visited[j] == 0 && power[j] <= e){
                e+=bonus[j];
                visited[j] = 1;
                count++;
            }
        }
    }

    cout<<count<<endl;
}