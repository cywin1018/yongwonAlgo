#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

char A[55][55];
char B[55][55];
int n, m;

void Checked(int a, int b) {
    for (int i = a; i <= a + 2; i++) {
        for (int j = b; j <= b + 2; j++) {
            if (A[i][j] == '0')
                A[i][j] = '1';
            else
                A[i][j] = '0';
        }
    }
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= m; j++) {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    // cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> B[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < m - 2; j++) {
            // cout << i << " " << j << '\n';
            if (A[i][j] != B[i][j]) {
                // cout << i << " " << j << '\n';
                Checked(i, j);
                cnt++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (A[i][j] != B[i][j])
                cnt = -1;
    cout << cnt << '\n';
}
