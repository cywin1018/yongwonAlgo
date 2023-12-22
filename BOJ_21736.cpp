#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

char table[606][606];
bool vis[606][606];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int cnt,n,m;


void BFS(int i,int j){
    vis[i][j]=true;
    queue<pii>q;
    q.push({i,j});
    while(!q.empty()){
        pii cur = q.front();q.pop();
        for(int dir=0;dir<4;dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx<0||nx>=n||ny<0||ny>=m)continue;
            if(vis[nx][ny])continue;
            if(table[nx][ny]=='X')continue;
            if(table[nx][ny]=='P')
                cnt++;
            vis[nx][ny]=true;
            q.push({nx,ny});

        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> table[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(table[i][j]=='I'){
                BFS(i,j);
            }
        }
    }

    if(cnt==0)
        cout << "TT" << '\n';
    else
        cout << cnt << '\n';

}