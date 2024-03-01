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
    while (1) {
        string s;

        getline(cin, s);


        if (s == "END")

            break;


        for (int i = s.length() - 1; i >= 0; i--)

            cout << s[i];

        cout << "\n";
    }
}
