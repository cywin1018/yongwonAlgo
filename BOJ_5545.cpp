#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ll long long
#define ull unsigned long long
#define  pii pair<int,int>
#define MOD 1000000000
const ll INF = 10e12 + 10;
using namespace std;

vector<int> cal;

bool compare(int i, int j) {
    return i > j;
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b;
    cin >> c;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cal.push_back(num);
    }
    sort(cal.begin(), cal.end(), compare);
    int douCal = c / a;
    int bestCal = douCal;

    int totalCost = a;
    int totalCal = c;
    for (int i = 0; i < n; i++) {
        totalCost += b;
        totalCal += cal[i];
        if (bestCal < totalCal / totalCost)
            bestCal = totalCal / totalCost;
    }
    cout << bestCal;
}
