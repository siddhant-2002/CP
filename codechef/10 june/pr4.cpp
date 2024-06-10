// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/PLPROCESS

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int>tsk(n);
        for(int i=0;i<n;i++){
            cin >> tsk[i];
        }
        
        int i=1;
        int j=n-2;
        
        int sum1=tsk[0];
        int sum2=tsk[n-1];
        
        while(i<=j){
            if(sum1>sum2){
                sum2+=tsk[j];
                j--;
            }
            else{
                sum1+=tsk[i];
                i++;
            }
            
        }
        cout << max(sum1,sum2) << endl;
    }
	return 0;
}
