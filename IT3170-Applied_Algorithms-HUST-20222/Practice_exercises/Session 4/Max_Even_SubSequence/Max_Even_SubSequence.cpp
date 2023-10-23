#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {
    return (a > b)? a : b;
}

int main () {
    int i, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) cin >> a[i];
    
    int f[n][2];
    if (a[0] % 2 == 0) f[0][0] = a[0];
    else f[0][1] = a[0];
    
    for (i = 1; i < n; i++) {
        if (a[i] % 2 == 0) {
            f[i][0] = max(f[i-1][0] + a[i], a[i]);
            f[i][1] = f[i-1][1] + a[i];
        } else {
            f[i][1] = max(f[i-1][0] + a[i], a[i]);
            f[i][0] = f[i-1][1] + a[i];
        }
    }
    
    int res = 0;
    for (i = 0; i < n; i++) res = max(res, f[i][0]);
    if (res != 0) cout << res;
    else cout << "NOT_FOUND";
    return 0;
}
