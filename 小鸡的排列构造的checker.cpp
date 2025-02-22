#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MAXN5 = 3e5 + 5;
ll n, m;
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
    cin >> n >> m;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        a[x] = i;
    }
    vector<array<ll, 3>> ar(m);
    for (int i = 0; i < m; i++) {
        cin >> ar[i][0] >> ar[i][1] >> ar[i][2];
    }
    sort(ar.begin(), ar.end(),
         [&](const array<ll, 3>& i, const array<ll, 3>& j) {
             return a[i[2] - 1] < a[j[2] - 1];
         });

    for (auto [l, r, c] : ar) {
        cout << l << ' ' << r << ' ' << c << '\n';
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