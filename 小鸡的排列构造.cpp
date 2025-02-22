#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n, m;
    cin >> n >> m;
    vector<ll> ans(n + 1);
    for (int i = 1; i <= n; i++) {
        ans[i] = n - i + 1;
    }

    set<array<int, 3>> ve;
    ll f = 0;
    for (int i = 0; i < m; i++) {
        ll l, r, c;
        cin >> l >> r >> c;
        ve.insert({l, r, c});
        if ((l - r + 1) % 2 == 0) {
            f = 1;
        }
    }

    if (f) {
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << ' ';
        }
    } else {
        vector<ll> vis(n + 1);
        for (auto [l, r, c] : ve) {
            if (!vis[c]) {
                swap(ans[r], ans[c]);
                vis[c] = 1;
                vis[r] = 1;
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << ' ';
        }
    }
    cout << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}