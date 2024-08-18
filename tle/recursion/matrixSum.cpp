#include <bits/stdc++.h>
using namespace std;

void solve(const vector<vector<int>>& a, const vector<vector<int>>& b, int r, int c, int mr, int mc) {
    if (mr >= r) {
        return;
    }

    if (mc == c - 1) {
        cout << a[mr][mc] + b[mr][mc] << endl;
        solve(a, b, r, c, mr + 1, 0);
        return;
    }
    cout << a[mr][mc] + b[mr][mc] << " ";
    solve(a, b, r, c, mr, mc + 1);
}

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> a(r, vector<int>(c));
    vector<vector<int>> b(r, vector<int>(c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }

    solve(a, b, r, c, 0, 0);

    return 0;
}