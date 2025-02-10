#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
using ull = unsigned long long;
#define ff(x) fixed << setprecision(x)
constexpr db EPS = 1.0e-9;
constexpr ll MOd = 998244353LL;
constexpr ll MOD = 1e9 + 7;
constexpr ll SZ = 1e6;
constexpr ll MAXN5 = 2e5 + 5;
constexpr ll MAXN6 = 2e6 + 5;
constexpr double pi = acos(-1.0);
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll n, m;
long long qp2(long long a, long long b, long long k) {
    a %= k;
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % k;
        a = a * a % k;
        b >>= 1;
    }
    return res;
}

void Solve(void) {
    ll n;
    string s;
    cin >> n >> s;
    if (n == 1) {
        ll res = 0;
        for (auto c : s) {
            res += c == '?';
        }
        cout << qp2(2, res, MOD) << '\n';
        return;
    }

    char s0 = s[0];
    char s1 = s[s.size() - 1];
    ll res = 0;
    for (auto c : s) {
        res += c == '?';
    }

    ll cnt = 0 ;
    if (s0 != '?') {
        ll a = s0 - '0';
        if (s1 != '?') {
            ll b = s1 - '0';
            cnt = (a == b) ? 1 : 0;
        } else {
            cnt = 1;
        }
    } else {
        if (s1 != '?') {
            cnt = 1;
        } else {
            cnt = 2;
        }
    }

    ll s01 = (s0 == '?') ? 2 : 1;
    ll s11 = (s1 == '?') ? 2 : 1;
    ll chen = s01 * s11;
    ll cha = chen - cnt;

    ll qw = res;
    if (s0 == '?') {
        qw--;
    }

    if (s1 == '?') {
        qw--;
    }
    ll pw2 = (qw >= 0) ? qp2(2, qw, MOD) : 0;

    ll ta1 = (1LL * cnt * pw2) % MOD;
    ll ta2 = (1LL * cha * pw2) % MOD;

    ll ans = (0LL + ta2 + ta2) % MOD;
    if (n >= 2) {
        ans = (ans + 1LL * (n - 2) * ta1) % MOD;
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
