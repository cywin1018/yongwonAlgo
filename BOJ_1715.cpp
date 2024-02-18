#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;


priority_queue<int, vector<int>, greater<int> > pq;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        pq.push(num);
    }
    int sum = 0;
    while (pq.size() > 1) {
        int n1 = pq.top();
        pq.pop();
        int n2 = pq.top();
        pq.pop();
        sum += (n1 + n2);
        pq.push(n1 + n2);
    }
    cout << sum;
}
