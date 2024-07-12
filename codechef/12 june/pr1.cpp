// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/HTMLTAGS

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
     
        if (n < 4 or s.substr(0, 2) != "</" or s[n-1] != '>') {
            cout << "Error\n";
            continue;
        }
     
        bool is_valid = true;
        for (int i = 2; i < n - 1; i++) {
            bool is_alpha = (s[i] >= 'a' and s[i] <= 'z');
            bool is_num = (s[i] >= '0' and s[i] <= '9');
            if (!is_alpha and !is_num) {
                is_valid = false;
                break;
            }
        }
     
        cout << (is_valid ? "Success" : "Error") << endl;
    }
    return 0;
}
