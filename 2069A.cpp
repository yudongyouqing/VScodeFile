#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    vector<ll> b(n + 2, -1);
    b[0] = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            if (b[i + 1] != -1 && b[i + 1] = b[i]) {
                cout << "NO" << '\n';
                return;
            }
            b[i + 1] = 1 - b[i];
        } else if (a[i] == 1) {
            if (a[i] != b[i]) {
                cout << "NO" << '\n';
                return;
            } else {
                b[i + 1] = a[i];
            }
        }
    }
    cout << "YES" << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}