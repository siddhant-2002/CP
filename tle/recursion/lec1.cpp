#include <iostream>
using namespace std;
#define int long long

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fibo(n-1)+fibo(n-2);
}

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

int count(int n, int cnt){
    if(n==1) return cnt;

    if(n&1 == 1){
        return count(3*n+1, cnt+1);
    }else{
        return count(n/2, cnt+1);
    }

}

signed main(){
    // cout << sum(50) << endl;
    // cout << fibo(7) << endl;
    //  cout << factorial() << endl;

    int n;
    cin >> n;
    cout << count(n, 1) << endl;
   
   
}