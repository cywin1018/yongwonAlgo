#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

vector<int> v;
int board[1010101];
int score[1010101];


int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        board[num] = 1;
        v.push_back(num);
    }
    for (int i = 0; i < n; i++) {
        for (int j = v[i] * 2; j < 1000001; j += v[i]) {
            if (board[j] == 1) {
                score[v[i]]++;
                score[j]--;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << score[v[i]] << " ";
}
