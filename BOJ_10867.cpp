#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

int arr[101010];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n; cin >>n;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    cout << arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1])
            cout <<" " << arr[i];
    }
}