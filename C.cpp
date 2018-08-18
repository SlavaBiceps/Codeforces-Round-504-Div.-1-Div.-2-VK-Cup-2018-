#include <iostream>

using namespace std;


int main() {
    int n, k, sum, t1, t2;
    string s;
    cin >> n >> k;
    cin >> s;
    sum = k / 2;
    t1 = sum;
    t2 = sum;
    for (int i = 0; i < n; i++) {
        if ((s[i] == '(') && (t1>0)) {
            t1--;
            cout << '(';
        }else if ((s[i] == ')') && (t2>0)&&(t2>t1)) {
            t2--;
            cout << ')';
        }
    }
    return 0;
}