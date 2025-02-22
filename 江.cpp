#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);
    for (auto &i : a) {
        cin >> i;
    }
    for (auto &i : b) {
        cin >> i;
    }

    vector<ll> amx(n);
    amx[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        amx[i] = max(a[i], amx[i + 1]);
    }
    vector<ll> bmx(n);
    bmx[0] = b[0];
    for (int i = 1; i < n; i++) {
        bmx[i] = max(b[i], bmx[i - 1]);
    }

    vector<ll> fuck1(n);
    for (int i = 0; i < n; i++) {
        fuck1[i] = a[i] - b[i];
    }
    for (int i = n - 2; i >= 0; i--) {
        fuck1[i] = max(fuck1[i], fuck1[i + 1]);
    }
    vector<ll> fuck2(n);
    for (int i = 0; i < n; i++) {
        fuck2[i] = b[i] - a[i];
    }
    for (int i = 1; i < n; i++) {
        fuck2[i] = max(fuck2[i], fuck2[i - 1]);
    }

    vector<ll> sua(n);
    vector<ll> sub(n);
    sua[0] = a[0];
    sub[0] = b[0];
    for (int i = 1; i < n; i++) {
        sua[i] = sua[i - 1] + a[i];
        sub[i] = sub[i - 1] + b[i];
    }

    ll mx = -1e18;
    for (int i = 0; i < n; i++) {
        ll aa = sua[i];
        ll bb = 0;
        if (i == 0) {
            bb = sub[n - 1];
        } else {
            bb = sub[n - 1] - sub[i - 1];
        }
        // cout << aa << ' ' << bb << ' ';
        // cout << amx[i] << ' ' << bmx[i] << '\n';
        mx = max({mx, aa + bb + amx[i] - a[i], aa + bb + bmx[i] - b[i]});

        if (i != 0 && i != n - 1) {
            mx = max({mx, aa + bb + fuck1[i + 1] + fuck2[i - 1]});
        }
     //   cout << mx << ' ';
    }
    cout << mx << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}