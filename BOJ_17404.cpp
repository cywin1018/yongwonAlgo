#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int home[1010][3];
int dp[1010][3];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    int ans = 1e9;

    for (int i = 0; i < n; i++) {
        cin >> home[i][0] >> home[i][1] >> home[i][2];
    }

    for (int c = 0; c < 3; c++) {
        for (int j = 0; j < 3; j++) {
            if (j == c)
                dp[0][j] = home[0][j];
            else
                dp[0][j] = 1e9;
        }
        for (int i = 1; i < n; i++) {
            dp[i][0] = home[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] = home[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = home[i][2] + min(dp[i - 1][1], dp[i - 1][0]);
        }
        for (int k = 0; k < 3; k++) {
            if (c == k)continue;
            ans = min(ans, dp[n - 1][k]);
        }
    }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= 2; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    cout << ans;
}
