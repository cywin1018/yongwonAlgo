#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

queue<int>q;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    deque<int> DQ;
    int N;
    cin >> N;
    while (N--) {
        int q;
        cin >> q;
        if (q == 1) {
            int pb;
            cin >> pb;
            DQ.push_back(pb);
        }
        else if (q == 2) {
            int pf;
            cin >> pf;
            DQ.push_front(pf);
        }
        else if (q == 3) {
            if (DQ.empty() == 1)
                cout << -1 << '\n';
            else
                cout << DQ.front() << '\n';

        }
        else if (q == 4) {
            if (DQ.empty() == 1)
                cout << -1 << '\n';
            else
                cout << DQ.back() << '\n';
        }
        else if (q == 5) {
            cout << DQ.size() << '\n';
        }
        else if (q == 6) {
            if (DQ.empty() == 1)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';

        }
        else if (q == 7) {
            if (DQ.empty() == 1)
                cout << -1 << '\n';
            else {
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }


        }
        else if (q == 8) {
            if (DQ.empty() == 1)
                cout << -1 << '\n';
            else {
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
        }
    }
}