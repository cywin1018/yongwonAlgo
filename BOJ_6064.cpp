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
    int t; cin >> t;
    while(t--){
        int m,n,x,y; cin >> m >> n >> x >> y;
        bool flag=false;
        while(x<=m*n){
            if((x-y)%n){ // 나누어 떨어지지 않는 경우
                x+= m;
            }else{ // 나누어 떨어지는 경우
                cout << x << '\n';
                flag=true;
                break;
            }
        }
        if(!flag)
            cout << "-1" << '\n';
    }

}