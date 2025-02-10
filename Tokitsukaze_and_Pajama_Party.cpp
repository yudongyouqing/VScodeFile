#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    vector<ll> a(n);
    vector<ll> b(n);
    a[0] = s[0] == 'u' ? 1 : 0;
    for (int i = 1; i < n; i++) {
        a[i] += a[i - 1];
        a[i] += s[i] == 'u' ? 1 : 0;
    }
    for (int i = 2; i < n - 6; i++) {
        if (s[i] == 'u' && s[i + 1] == 'w' && s[i + 2] == 'a' &&
            s[i + 3] == 'w' && s[i + 4] == 'a' && s[i + 5] == 'u' &&
            s[i + 6] == 'w' && s[i + 7] == 'a') {
       //     cout << i << ' ';
            ans += a[i - 2];
        }
    }
  //  cout << '\n';
    cout << ans << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}