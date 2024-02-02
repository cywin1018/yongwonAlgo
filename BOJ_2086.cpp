#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;
typedef vector<vector<long long> > matrix;
const long long mod = 1'000'000'000;

matrix operator *(const matrix &a, const matrix &b) {
    int n = a.size();
    matrix c(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += (a[i][k] * b[k][j]) % mod;
                c[i][j] %= mod;
            }
        }
    }
    return c;
}

matrix A2 = {{1, 0}, {0, 1}};
matrix A = {{1, 1}, {1, 0}};
matrix B2 = {{1, 0}, {0, 1}};
matrix B = {{1, 1}, {1, 0}};

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    long long a, b;
    cin >> a >> b;
    bool flag = false;
    if (a == b) {
        flag = true;
        a--;
    }

    b += 2;
    a += 1;
    while (a > 0) {
        if (a % 2 == 1) {
            A2 = A2 * A;
        }
        A = A * A;
        a /= 2;
    }
    while (b > 0) {
        if (b % 2 == 1) {
            B2 = B2 * B;
        }
        B = B * B;
        b /= 2;
    }
    if (flag) {
        cout << A2[0][1] << '\n';
    } else {
        cout << ((B2[0][1] - A2[0][1] + mod) % mod) << '\n';
    }
}
