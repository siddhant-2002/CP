#include <bits/stdc++.h>
using namespace std;    

int main(){
    vector<vector<int>>v(5);

    int x=0,y=0;


    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int temp;
            cin >> temp;
            if(temp==1){
                x = j;
                y = i;
            }
            v[i-1].push_back(temp);
            
        }
    }

    y=5-y+1;

    x = abs(x-3);
    y = abs(y-3);

    cout << x+y << endl;

}