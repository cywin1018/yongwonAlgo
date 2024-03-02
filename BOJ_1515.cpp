#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    string s;
    cin >> s;
    int num = 0, ptr = 0;
    while (num < 30000) {
        num++;
        string tmp = to_string(num);
        for (int i = 0; i < tmp.size(); i++) {
            if (s[ptr] == tmp[i])
                ptr++;
            if (ptr == s.size()) {
                cout << num << '\n';
                return 0;
            }
        }
    }
}
