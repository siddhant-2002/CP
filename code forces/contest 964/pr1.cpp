#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAX = 26;
char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' };

char getRandomChar(char exclude) {
    char randomChar;
    do {
        randomChar = alphabet[rand() % MAX];
    } while (randomChar == exclude);
    return randomChar;
}

signed main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        bool allSame = true;
        int count = 1;
        int maxCount = 1;
        int index = s.size();

        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1]){
                count++;
                if(count > maxCount){
                    maxCount = count;
                    index = i;
                }
            } else {
                count = 1;
                allSame = false;
            }
        }

        if(allSame){
            char randomChar = getRandomChar(s[0]);
            s.insert(s.size()-1, 1, randomChar);
            cout << s << endl;
        } else {
            char randomChar = getRandomChar(s[index-1]);
            s.insert(index, 1, randomChar);
            cout << s << endl;
        }
    }
    return 0;
}