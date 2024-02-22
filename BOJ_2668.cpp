#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

int Arr[101];
bool visited[101];
vector<int> v;

void DFS(int idx, int val) {
    if (visited[idx]) {
        if (idx == val) {
            v.push_back(val);
        }
    } else {
        visited[idx] = true;
        DFS(Arr[idx], val);
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> Arr[i];
    for (int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        DFS(i, i);
    }
    cout << v.size() << '\n';
    for (auto iter: v) {
        cout << iter << '\n';
    }
}
