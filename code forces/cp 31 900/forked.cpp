#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vpis vector<pair<int,string>>
#define vpss vector<pair<string,string>>
#define vi vector<int>
#define vs vector<string>
#define mpii map<int,int>
#define mpis map<int, string>
#define mpss map<string,string>
#define mpci map<char,int>
#define si set<int,int>



signed main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int xk,yk,xq,yq;
        cin >> xk >> yk >> xq >> yq;

        vpii v = {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};

        set<pii> s1;
        set<pii>s2;



        for(auto d:v){
            int x,y;
            x = xk + d.first;
            y= yk + d.second;

            s1.insert({x,y});

            x = xq + d.first;
            y= yq + d.second;

            s2.insert({x,y});
        }

        int ans=0;
        for(auto it : s1){
            if(s2.find(it) != s2.end()){
                ans++;
            }
        }
        cout << ans << endl;
    }
}