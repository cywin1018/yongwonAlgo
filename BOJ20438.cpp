#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

int stu[5050];
bool slp[5050];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n,k,q,m; cin >> n >> k>> q >> m;
    for(int i=3;i<=n+2;i++)
        stu[i]=1;
    for(int i=0;i<k;i++){
        int num; cin >> num;
        slp[num] = true;
    }

    for(int i=0;i<q;i++){
        int num; cin >> num;
        if(slp[num])continue;

        int idx = num;
        while(idx<=n+2){
            if(!slp[idx]){
                stu[idx]=0;
            }
            idx+=num;
        }
    }

    for(int i=3;i<=n+2;i++)
        stu[i] += stu[i-1];

    for(int i=0;i<m;i++){
        int st,ed; cin >> st >> ed;
        cout << stu[ed]-stu[st-1] <<'\n';
    }
}