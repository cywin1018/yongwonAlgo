#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

char arr[10101];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    char A;
    cin >> A;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == A)
            cnt++;
    }
    cout << cnt;
}
