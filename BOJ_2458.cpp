#include <bits/stdc++.h>

using namespace std;

int table[505][505];

int main() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        table[a][b] = 1;
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (table[i][k] && table[k][j]) {
                    table[i][j] = 1;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= n; j++) {
            if (table[i][j] || table[j][i]) {
                cnt++;
            }
        }
        if (cnt == n - 1)ans++;
    }
    cout << ans << '\n';
}

