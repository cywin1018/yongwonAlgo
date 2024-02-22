#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int table[130][130];
int C[130][130];
int n = 1;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};


int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int num = 0;
    while (true) {
        num++;
        cin >> n;
        if (n == 0)break;

        memset(table, 0, sizeof(table));
        for (int i = 0; i < n; i++) {
            fill(C[i], C[i] + n, 1e9);
            for (int j = 0; j < n; j++) {
                cin >> table[i][j];
            }
        }


        queue<pii > q;
        q.push({0, 0});
        C[0][0] = table[0][0];
        while (!q.empty()) {
            auto cur = q.front();
            q.pop();
            for (int dir = 0; dir < 4; dir++) {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];
                if (nx < 0 || ny < 0 || nx >= n || ny >= n)continue;
                if (C[nx][ny] <= C[cur.first][cur.second] + table[nx][ny])continue;
                C[nx][ny] = C[cur.first][cur.second] + table[nx][ny];
                q.push({nx, ny});
            }
        }
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cout << C[i][j] << " ";
        //     }
        //     cout << '\n';
        // }
        cout << "Problem " << num << ": " << C[n - 1][n - 1] << '\n';
    }
}
