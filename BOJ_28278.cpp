#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12+10;
using namespace std;

deque<int>dq;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    while(n--){
        int str; cin >> str;
        if(str==1){
            int num; cin >> num;
            dq.push_front(num);
        }else if(str == 2){
            int num; cin >> num;
            dq.push_back(num);
        }else if(str ==3){
            if(!dq.empty()){

                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else{
                cout << -1 << '\n';
            }
        }
        else if(str ==4){
            if(!dq.empty()){

                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else{
                cout << -1 << '\n';
            }
        }else if(str == 5){
            cout << dq.size() << '\n';
        }else if(str ==6){
            if(dq.empty())
                cout << "1" << '\n';
            else
                cout << "0" << '\n';
        }else if(str == 7){
            if(dq.empty())
                cout << -1 << '\n';
            else{

                cout << dq.front() << '\n';

            }
        } else if(str ==8){
            if(dq.empty())
                cout << -1 << '\n';
            else{

                cout << dq.back() << '\n';

            }
        }
    }
}