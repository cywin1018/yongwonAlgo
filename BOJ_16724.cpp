#include <bits/stdc++.h>
// #pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


int n, m, ans;
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, 1, -1};
int table[1000][1000];
int visited[1000][1000];

void dfs(int y, int x) {
    visited[y][x] = 1;
    int ny = y + dy[table[y][x]], nx = x + dx[table[y][x]];

    if (visited[ny][nx] == 1) ans++;
    if (visited[ny][nx] == 0) dfs(ny, nx);
    visited[y][x] = 2;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            if (c == 'U') table[i][j] = 1;
            else if (c == 'R') table[i][j] = 2;
            else if (c == 'L') table[i][j] = 3;
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (visited[i][j] == 0) dfs(i, j);
    cout << ans;
}
