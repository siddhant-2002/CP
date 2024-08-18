#include <bits/stdc++.h>
using namespace std;

int power(int ans, int i, int a, int b)
{
    if (i == b)
    {
        return ans;
    }
    
    return power(ans*a, i + 1, a, b);
}

int optimisepower(int a,int b){
    if (b == 0) {
        return 1;
    }
    int ans = optimisepower(a,b/2);
    ans*=ans;
    if(b%2==1){
        return ans*a;
    }
    else{
        return ans;
    }
}

int main()
{
    
    int i=1;
    int a=5;
    int b=3;
    int ans=a;
    // cout << power(ans,i,a,b)<<endl;
    cout << optimisepower(a,b)<<endl;


}