#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    string tmp;
    getline(cin, tmp);
    vector<queue<string> > q(n + 1);
    for (int i = 0; i <= n; i++) {
        string str;
        getline(cin, str);
        istringstream is(str);

        string s;
        while (getline(is, s, ' ')) {
            q[i].push(s);
        }
    }
    bool flag = false;
    int sz = q[n].size();

    for (int i = 0; i < sz; i++) {
        string wd = q[n].front();
        for (int j = 0; j < n; j++) {
            if ((!q[j].empty()) && (q[j].front() == wd)) {
                q[j].pop(), q[n].pop();

                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "Impossible" << '\n';
            return 0;
        }
        flag = false;
    }
    for (int j = 0; j < n; j++) {
        if (!q[j].empty()) {
            cout << "Impossible" << '\n';
            return 0;
        }
    }
    cout << "Possible" << '\n';
}
