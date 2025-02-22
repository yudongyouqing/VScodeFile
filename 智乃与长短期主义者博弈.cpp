#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector dp(n, vector<ll>(n, 0));
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
    // for (ll i = 0; i < n; ++i) {
    //     dp[i][i] = 0;
    //     if (i < n - 1) {
    //         dp[i][i + 1] = min(a[i], a[i + 1]);
    //     }
    // }
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    for (int len = 1; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            ll j = i + len - 1;
            if (len == 1) {
                dp[i][i] = 0;
                continue;
            }
            if (len == 2) {
                dp[i][j] = min(a[i], a[j]);
                continue;
            }
            if (a[i] >= a[j]) {
                dp[i][j] =
                    max(dp[i + 1][j - 1] + a[j], dp[i + 2][j] + a[i + 1]);
            } else {
                dp[i][j] =
                    max(dp[i + 1][j - 1] + a[i], dp[i][j - 2] + a[j - 1]);
            }
        }
    }
    cout << sum - dp[0][n - 1] << ' ' << dp[0][n - 1] << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    // cin >> cas;
    while (cas--) Solve();
    return 0;
}