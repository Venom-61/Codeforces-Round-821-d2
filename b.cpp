#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Rule of League

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    if(x > y)
        swap(x, y);

    if(x || !y || (n - 1) % y) {
        cout << -1 << endl;
        return ;
    }

    for(int k = 2; k <= n; k += y) {
        for(int i = 1; i <= y; i++)
            cout << k << ' ';
    }

    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc = 0;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}
