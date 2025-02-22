#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    ll ans = 1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 2; i <= n; i++) {
        if (a[i] != a[i - 1]) {
            ans++;
        }
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