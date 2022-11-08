#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define end "\n"

// C. Parity Shuffle Sorting

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) 
        cin >> a[i];

    cout << n - 1 << "\n";
    if(n > 1) {
        cout << 1 << " " << n << "\n";
    }
    int x = (a[1] + a[n]) % 2 ? a[1] : a[n];
    for(int i = 2; i < n; i++) {
        if((x + a[i]) % 2)
            cout << 1 << " " << i << "\n";
        else 
            cout << i << " " << n << "\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
