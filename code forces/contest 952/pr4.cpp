#include <bits/stdc++.h>
using namespace std;
#define int long long


// 6
// 5 5
// .....
// .....
// ..#..
// .....
// .....
// 5 5
// ..#..
// .###.
// #####
// .###.
// ..#..
// 5 6
// ......
// ......
// .#....
// ###...
// .#....
// 1 1
// #
// 5 6
// ...#..
// ..###.
// .#####
// ..###.
// ...#..
// 2 10
// ..........
// ...#......



signed main() {
    int t;
    cin >> t;
    while(t--){
       int n, m;
       cin >> n >> m;

       int x=0;
       

       vector<string> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            
        }

        for(auto it: a){
            for(int i=0;i<it.size();i++){
                if(it[i] == '#'){
                    x=i;
                }
            }
        }
        
        int empty=0;
        int full=0;
        for(auto it: a){
            for(int i=0;i<it.size();i++){
                if(it[i] == '#'){
                    full++;
                    break;
                }
            }
            
        }
        for(auto it: a){
            int flag=0;
            for(int i=0;i<it.size();i++){
                if(it[i] == '#'){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                empty++;
            }
            else{
                break;

            }
        }

        int y=(full/2)+1 +empty;

        cout << y << " " << x+1 << endl;
    }
	return 0;
}