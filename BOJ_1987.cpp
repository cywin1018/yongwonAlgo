#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

bool alpha[26]; // 아스키코드 A: 65 ~ Z: 90
char table[22][22];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int r, c, cnt;
int ans = 0;

void DFS(int x, int y, int cnt) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= r || ny >= c || nx < 0 || ny < 0)continue;

        if (!alpha[table[nx][ny] - 'A']) {
            alpha[table[nx][ny] - 'A'] = true;
            DFS(nx, ny, cnt + 1);
            alpha[table[nx][ny] - 'A'] = false;
        }
    }
    ans = max(ans, cnt);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> table[i][j];
        }
    }
    alpha[table[0][0] - 'A'] = true;
    DFS(0, 0, 1);
    cout << ans;
}
