#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD  1000000007
const ll INF = 10e12 + 10;
using namespace std;

ll bon[8]; // 정보관을 idx= 0으로 시작하여 반시계방향으로 idx++
ll dp[8];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int d;
    cin >> d;
    dp[0] = 1;
    for (int i = 0; i < d; i++) {
        bon[0] = dp[1] + dp[7];
        bon[1] = dp[0] + dp[2] + dp[7];
        bon[2] = dp[1] + dp[3] + dp[6] + dp[7];
        bon[3] = dp[2] + dp[4] + dp[6];
        bon[4] = dp[3] + dp[5];
        bon[5] = dp[4] + dp[6];
        bon[6] = dp[2] + dp[3] + dp[5] + dp[7];
        bon[7] = dp[0] + dp[1] + dp[2] + dp[6];

        for (int j = 0; j < 8; j++)
            dp[j] = bon[j] % MOD;
    }
    cout << dp[0];
}
