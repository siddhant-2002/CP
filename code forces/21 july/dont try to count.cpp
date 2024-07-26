#include <bits/stdc++.h>
using namespace std;

bool find(string s, string t)
{
    return s.find(t) != string::npos;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        string s, t;
        cin >> s >> t;

        if (find(s, t))
        {
            cout << 0 << endl; // If t is found in s initially, no need to double
            continue;
        }

        int count = 0;
        while (s.size() <= 25 && !find(s, t))
        {
            s += s;
            count++;
        }

        if (find(s, t))
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}