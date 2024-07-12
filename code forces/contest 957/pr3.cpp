#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m,n,k;
        cin >> n >> m >> k;

        vector<int> arr;

        for(int i = 1; i <=n;i++){
            if(i>=k){
                arr.push_back(i);
            }
        }
        for(int i = 1; i <=n;i++){
            if(i<k && i>m){
                arr.push_back(i);
            }
        }
        for(int i = 1; i <=n;i++){
            if(i<=m){
                arr.push_back(i);
            }
        }

        for(int i = 0; i <n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;

    }
    return 0;
}
