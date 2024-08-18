#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
const int MAXN = 1000000;

int n, q;
vector<int> A;
vector<pair<int, int>> queries;
vector<int> compressedA;
vector<int> results;
int freq[MAXN + 1];

void coordinateCompression() {
    vector<int> sortedA = A;
    sort(sortedA.begin(), sortedA.end());
    sortedA.erase(unique(sortedA.begin(), sortedA.end()), sortedA.end());
    
    compressedA.resize(n);
    for (int i = 0; i < n; i++) {
        compressedA[i] = lower_bound(sortedA.begin(), sortedA.end(), A[i]) - sortedA.begin() + 1;
    }
}

int countDistinctInRange(int L, int R) {
    memset(freq, 0, sizeof(freq));
    int distinctCount = 0;

    for (int i = L; i <= R; i++) {
        if (freq[compressedA[i]] == 0) {
            distinctCount++;
        }
        freq[compressedA[i]]++;
    }

    return distinctCount;
}

long long solve() {
    coordinateCompression();
    
    long long totalSum = 0;
    for (const auto& query : queries) {
        int L = query.first - 1; // Convert to 0-based index
        int R = query.second - 1; // Convert to 0-based index
        int distinctCount = countDistinctInRange(L, R);
        totalSum = (totalSum + distinctCount) % MOD;
    }

    return totalSum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    A.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cin >> q;
    queries.resize(q);

    int two;
    cin >> two;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        queries[i] = {l, r};
    }

    long long result = solve();
    cout << result << '\n';

    return 0;
}
