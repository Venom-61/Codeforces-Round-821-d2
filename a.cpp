#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Consecutive Sum

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[i % k] = max(a[i % k], x);
    }

    long long s = 0;
    for(int i = 0; i < k; i++) {
        s += a[i];
    }

    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
