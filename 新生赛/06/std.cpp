#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
using ull = unsigned long long;
#define ff(x) fixed << setprecision(x)
#define vel vector<long long>
#define vei vector<int>
#define ves vector<string>
#define asn ans
constexpr int inf = 0x3f3f3f3f;
constexpr ll INF = 0x3f3f3f3f3f3f3f3fLL;
constexpr db EPS = 1.0e-9;
constexpr ll MOD = 998244353LL;
constexpr ll SZ = 1e6;
constexpr ll MAXN5 = 2e5 + 5;
constexpr ll MAXN6 = 2e6 + 5;
ll n, m;

void Solve(void) {
    ll n, k;
    cin >> n >> k;
    ll minas = LONG_LONG_MAX;
    ll lo = 1, hi = n;
    ll flag = 0;
    while (lo < hi) {
        ll x = (lo + hi) / 2;
        ll s1 = x * (2 * k + x - 1)/2;
        ll s2 = (n - x) * (2 * k + n + x - 1)/2;
        if (s1 > s2) {
            hi = x;
        } else {
            lo = x + 1;
        }
    }
   // cout<<lo<<'\n';
    auto xx = [&](ll x) {
        ll s1 = x * (2 * k + x - 1)/2;
        ll s2 = (n - x) * (2 * k + n + x - 1)/2;
     //   cout << s1 << ' ' << s2 << '\n';
        return abs(s1 - s2);
    };
    ll ans1 = xx(lo - 1);
    ll ans2 = xx(lo);
    ll ans3 = xx(lo + 1);
   // cout << ans1 << ' ' << ans2 << ' ' << ans3 << '\n';
    cout << min({ans1, ans2, ans3}) << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // 	freopen("mine.in", "r", stdin);
    // 	freopen("mine.out", "w", stdout);

    int cas = 1;
    cin >> cas;
    while (cas--)
        Solve();
    return 0;
}