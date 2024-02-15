#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000007
const ll INF = 10e12 + 10;
using namespace std;

typedef vector<vector<long long> > matrix;

matrix operator *(const matrix &a, const matrix &b) {
    int n = a.size();
    matrix c(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += (a[i][k] * b[k][j]) % MOD;
                c[i][j] %= MOD;
            }
        }
    }
    return c;
}

matrix A = {
    {0, 1, 0, 0, 0, 1, 0, 0},
    {1, 0, 1, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 0, 0, 1, 1},
    {0, 0, 1, 0, 1, 0, 0, 1},
    {0, 0, 0, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 0, 0, 1, 0, 1},
    {0, 0, 1, 1, 1, 0, 1, 0}
};

matrix ans = {
    {1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1}
};

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int d;
    cin >> d;
    while (d > 0) {
        if (d % 2) {
            ans = ans * A;
        }
        A = A * A;
        d /= 2;
    }
    cout << ans[4][4] << '\n';
}
