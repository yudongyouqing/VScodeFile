#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> ve(n, vector<ll>(m));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> ve[i][j];
        }
    }

    vector<vector<ll>> dp1(n, vector<ll>(m, 0));
    vector<vector<ll>> dp2(n, vector<ll>(m, 0));
    vector<vector<ll>> dp3(n, vector<ll>(m, 0));
    vector<vector<ll>> dp4(n, vector<ll>(m, 0));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (i > 0 && j > 0)
                dp1[i][j] = dp1[i - 1][j - 1] + ve[i][j];
            else
                dp1[i][j] = ve[i][j];
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = m - 1; j >= 0; j--) {
            if (i > 0 && j < m - 1)
                dp2[i][j] = dp2[i - 1][j + 1] + ve[i][j];
            else
                dp2[i][j] = ve[i][j];
        }
    }

    for (ll i = n - 1; i >= 0; i--) {
        for (ll j = 0; j < m; j++) {
            if (i < n - 1 && j > 0)
                dp3[i][j] = dp3[i + 1][j - 1] + ve[i][j];
            else
                dp3[i][j] = ve[i][j];
        }
    }

    for (ll i = n - 1; i >= 0; i--) {
        for (ll j = m - 1; j >= 0; j--) {
            if (i < n - 1 && j < m - 1)
                dp4[i][j] = dp4[i + 1][j + 1] + ve[i][j];
            else
                dp4[i][j] = ve[i][j];
        }
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            ll res = ve[i][j];
            if (i > 0 && j > 0) res += dp1[i - 1][j - 1];
            if (i > 0 && j < m - 1) res += dp2[i - 1][j + 1];
            if (i < n - 1 && j > 0) res += dp3[i + 1][j - 1];
            if (i < n - 1 && j < m - 1) res += dp4[i + 1][j + 1];

            ans = max(ans, res);
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) Solve();
    return 0;
}
