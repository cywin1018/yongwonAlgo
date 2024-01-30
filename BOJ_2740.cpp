#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int matrixA[101][101];
int matrixB[101][101];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);

    int n, m, k;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            matrixA[i][j] = num;
        }
    }
    cin >> m >> k;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            int num;
            cin >> num;
            matrixB[i][j] = num;
        }
    }
    vector<vector<int> > C(n, vector<int>(k));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int q = 0; q < m; q++) {
                C[i][j] += matrixA[i][q] * matrixB[q][j];
                // cout << C[i][j] << " ";
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << C[i][j] << " ";
        }
        cout << '\n';
    }
}
