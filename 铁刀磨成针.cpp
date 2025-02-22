#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n, x, y;
    cin >> n >> x >> y;

    ll mo = x + min(n, y);
    ll ans = 0;
    for (ll mx = min(n, y); mx > 0; mx--) {
        ll del = min(n, y) - mx;
        ll res = (mx + x) * (del + 1);
        ll len = min(x + mx - 1, n - min(n, y));
        ll cnt = (len) * (x + mx - 1 + x + mx - (len)) / 2;
        //    cout << x + mx - 1 << ' ' << x + mx - (n - min(n, y)) <<"dsadad"<<
        '\n';
        ans = max(ans, res + cnt);
       // cout << res << ' ' << cnt << '\n';
    }
    cout << ans << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}