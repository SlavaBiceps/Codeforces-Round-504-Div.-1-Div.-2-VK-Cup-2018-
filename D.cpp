#include <iostream>

using namespace std;


int main() {
    int n, q, f, e, tek;
    int mas[100002],nas[100002],red[100002];
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
        if (mas[i]>q) {
            cout << "NO1";
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        nas[i]=mas[i];
    }
    for (int i = q; i > 0; i--) {
        f=-1;
        e=-1;
        for (int j = 0; j < n; j++) {
            if (mas[j]!=q&&f!=-1) {
                e=j;
                }
            if (mas[j]==q) {
                if (f!=-1&&mas[j-1]!=q) {
                    if (mas[j]==0) {
                        mas[j]=q;
                    }
                }
                        else {
                        cout << "NO2";
                        return 0;
                    }
                if (f==-1) f = j;

            }
            if (e=-1) e=n;
            if (f>0) tek=f-1;
                else if (e=n) tek=q-1;
            for(int k=f;k<e;k++) {
                mas[k] = mas[tek];
                red[k] = 1337;
            }
        }
    }
    for (int i=0; i<n; i++) {
        if (red[i]!=1337&&mas[i]!=0) {
            cout << "NO3";
            return 0;
        }
    }
    cout << "YES" << endl;
    for (int i=0;i<n;i++){
        if (nas[i]==0) {
            cout << mas[i] << " ";
        } else cout << nas[i] << " ";
    }
    return 0;
}
