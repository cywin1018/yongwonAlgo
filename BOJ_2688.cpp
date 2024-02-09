#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

ll dp[66][11];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < 66; i++) {
        for (int j = 0; j < 11; j++) {
            dp[i][j] = 1;
        }
    }
    for (int i = 2; i <= 65; i++) {
        for (int j = 1; j < 10; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n + 1][9] << '\n';
    }
}
