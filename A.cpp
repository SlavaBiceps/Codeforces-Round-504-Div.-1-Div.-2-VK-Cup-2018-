#include <iostream>

using namespace std;


int main() {
    string s, t;
    int n, m;
    cin >> n >> m;
    cin >> s >> t;
    int f = 0;
    if (m>=n-1) {
    for (int i = 0; i < m; i++) {
        if (i >= n) {
            f = 1;
            break;
        }
        if (s[i] == t[i]) {
            continue;
        } else if (s[i] == '*') break;
        else f = 1;
    }
    if (f == 1) {
        cout << "NO";
    } else {
        for (int i = n - 1, j = m - 1; i >= 0; i--, j--) {

            if (s[i] == t[j]) continue;
            else if (s[i] == '*') break;
            else f = 1;
        }
        if (f == 1) cout << "NO";
        else cout << "YES";
    }
    } else {cout << "NO";}
    return 0;
}