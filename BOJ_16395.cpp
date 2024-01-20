#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;
int d[31][31];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int a, b;
    cin >> a >> b;
     for (int i = 0; i < 31; i++) {
        d[i][0] = 1;
    }
    for (int i = 1; i < 31; i++) {
        for (int j = 1; j <= i; j++) {
            d[i][j] = d[i - 1][j - 1] + d[i - 1][j];
        }
    }

    cout << d[a - 1][b - 1] << '\n';

}
