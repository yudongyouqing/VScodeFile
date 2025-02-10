#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    if (n > m) {
        swap(n, m);
        swap(s1, s2);
    }
    vector<ll> a(26);
    vector<ll> b(26);
    for (auto c : s1) {
        a[c - 'a']++;
    }
    for (auto c : s2) {
        b[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        ll res = min(a[i], b[i]);
        a[i] -= res;
        b[i] -= res;
    }
    ll ans1 = 0;
    ll ans2 = 0;
    for (int i = 0; i < 26; i++) {
        ans1 += a[i];
        ans2 += b[i];
    }
    ll del = ans2 - ans1;
    del /= 2;
    ll j = 0;
    while (del > 0 && j < 26) {
        if (b[j] >= 2) {
            ll res = b[j] / 2;
            res = min(res, del);
            b[j] -= res * 2;
            del -= res;
        }
        j++;
    }
    cout << del + ans1 << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}