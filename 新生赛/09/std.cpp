#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
#define ff(x) fixed << setprecision(x)
constexpr int inf = 0x3f3f3f3f;
constexpr ll INF = 0x3f3f3f3f3f3f3f3fLL;
constexpr db EPS = 1.0e-9;
constexpr ll MOD = 998244353LL;
constexpr ll SZ = 1e6;
constexpr ll MAXN5 = 6e5 + 5;
constexpr ll MAXN6 = 2e6 + 5;
ll n;
ll tree[MAXN5];
ll lowbit(ll x) { return x & -x; }
void add(ll x, ll y) {
    while (x <= n) {
        tree[x] += y;
        x += lowbit(x);
    }
}
ll query(ll x) {
    ll t = 0;
    while (x) {
        t += tree[x];
        x -= lowbit(x);
    }
    return t;
}
void Solve(void) {
    cin >> n;
    vector<pair<ll, ll>> vec;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        vec.push_back({x, i});
    }
    sort(vec.begin(), vec.end(),
         [&](const pair<ll, ll> &a, const pair<ll, ll> &b) {
             if (a.first == b.first) {
                 return a.second > b.second;
             }
             return a.first < b.first;
         });
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        add(vec[i].second, 1);
        ans += query(vec[i].second - 1);
    //    cout<<ans<<'\n';
    }
    cout << ans;
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    // cin >> cas;
    while (cas--)
        Solve();
    return 0;
}