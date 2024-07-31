#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;

        while (n >= 2)
        {
            if (n >= 4)
            {
                n -= 4;
                count++;
            }
            else if (n >= 2)
            {
                n -= 2;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}