#include <iostream>

using namespace std;


int main() {
    long long n,k,sum;
    cin >> n >> k;
    long long sr=k/2;
    long long p=k%2;
    if (p==0) sum=min(sr-1,n-sr);
    else sum=min(sr,n-sr);
    if (sum>0) cout << sum;
        else cout << "0";
    return 0;
}