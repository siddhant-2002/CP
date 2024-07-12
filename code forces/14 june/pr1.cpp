// https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    int sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += v[i][0];
        sum2 += v[i][1];
        sum3 += v[i][2];
    }

    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

