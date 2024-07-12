// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/PERMXORITY

#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll ,ll>
using namespace std ;
const ll z = 998244353 ;


int main()
{

    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        
        if(n == 2)
        {
            cout << -1 << endl ;
            continue ;
        }

        if(n%2 == 1)
        {
            for(int i = 1 ; i <= n ; i++)
                cout << i << ' ';
            cout << endl ;
        }
        else
        {
            cout << 2 << ' ' << 3 << ' ' << 1 << ' ';
            for(int i = 4 ; i <= n ; i++)
                cout << i << ' ';
            cout << endl ;
        }
    }

    return 0;
}