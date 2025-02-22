#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n;
    string s;
    cin >> n >> s;
    string res = "CHICKEN";
    vector<ll> a(26);
    if (n & 1) {
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            a[s[i] - 'A']++;
            if (cnt == res.size()) {
                continue;
            }
            if (s[i] == res[cnt]) {
                cnt++;
            }
        }
        ll su = 0;
        ll mx = 0;
        for (auto c : res) {
            a[c - 'A']--;
        }
        for (int i = 0; i < 26; i++) {
            su += a[i];
            mx = max(mx, a[i]);
        }
        // cout << mx << ' ' << su << '\n';

        if (cnt == res.size() && mx * 2 <= su) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    } else {
        cout << "NO" << '\n';
    }
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}