#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll mod = 998244353;
constexpr ll maxn6 = 1e6 + 10;

vector<ll> a(maxn6), b(maxn6);
vector<ll> sua(maxn6), sub(maxn6);

void cal() {
    a[1] = 1;
    a[2] = 0;
    for (int i = 3; i < maxn6; ++i) {
        a[i] = (a[i - 1] + a[i - 2]) % mod;
    }

    b[1] = 0;
    b[2] = 1;
    for (int i = 3; i < maxn6; ++i) {
        b[i] = (b[i - 1] + b[i - 2]) % mod;
    }

    sua[0] = 0;
    for (int i = 1; i < maxn6; ++i) {
        sua[i] = (sua[i - 1] + a[i]) % mod;
    }

    sub[0] = 0;
    for (int i = 1; i < maxn6; ++i) {
        sub[i] = (sub[i - 1] + b[i]) % mod;
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        v[i] %= mod;
        if (v[i] < 0) v[i] += mod;
    }

    vector<ll> su(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        su[i] = (su[i - 1] + v[i - 1]) % mod;
    }

    ll sum1 = 0;
    for (int i = 1; i <= n; ++i) {
        int m = n - i + 1;
        if (m < 0) continue;
        sum1 = (sum1 + a[i] * su[m]) % mod;
    }

    ll sum2 = 0;
    for (int j = 1; j <= n; ++j) {
        sum2 = (sum2 + v[j - 1] * sub[j]) % mod;
    }

    ll ans = (sum1 + sum2) % mod;
    ans = (ans + mod) % mod;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    cal();
    int cas;
    cin >> cas;
    while (cas--) {
        solve();
    }
    return 0;
}
