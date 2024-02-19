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

matrix pow(matrix a, int n) {
    matrix ret(a.size(), vector<long long>(a.size()));
    for (int i = 0; i < a.size(); i++) ret[i][i] = 1;
    while (n > 0) {
        if (n & 1) ret = ret * a;
        n /= 2;
        a = a * a;
    }
    return ret;
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m;
    cin >> n >> m;
    matrix A(n, vector<long long>(n));
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        A[a][b] = A[b][a] = 1;
    }
    int d;
    cin >> d;
    A = pow(A, d);
    cout << A[0][0] << '\n';
}
