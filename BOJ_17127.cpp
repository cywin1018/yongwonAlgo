#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

vector<int> v;
int n;

int sum(int a, int b, int c) {
    int tmp1 = 1, tmp2 = 1, tmp3 = 1, tmp4 = 1;
    for (int i = 0; i < n; i++)
        if (i <= a) tmp1 *= v[i];
        else if (i <= b) tmp2 *= v[i];
        else if (i <= c) tmp3 *= v[i];
        else tmp4 *= v[i];

    return tmp1 + tmp2 + tmp3 + tmp4;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n - 1; k++) {
                ans = max(ans, sum(i, j, k));
            }
        }
    }
    cout << ans << '\n';
}
