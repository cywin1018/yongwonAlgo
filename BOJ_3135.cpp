#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int a,b,n,btn,mn=10e9+10; cin >> a >> b >>n;
    for(int i=0;i<n;i++){
        cin >> btn;
        mn=min(mn,abs(btn-b)+1);

    }
    cout << min(mn,abs(a-b));
}