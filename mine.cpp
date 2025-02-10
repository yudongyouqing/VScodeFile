#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> a(2e6);
vector<ll> b(2e6);
void Solve(void) {
    ll n;
    cin >> n;
    if (n >= 100000) {
        cout << "66.7% probability sunny days, 33.3% probability of rain."
             << '\n';
        return;
    }
    double x = a[n];
    double y = b[n];
    cout << fixed << setprecision(1);
    cout << x / (x + y) * 100 << "% probability sunny days, "
         << (1.0 - (x / (x + y))) * 100 << "% probability of rain." << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    a[1] = 1;
    b[1] = 1;
    for (int i = 2; i < 1e6; i++) {
        a[i] = a[i - 1] + b[i - 1] * 2;
        b[i] = a[i - 1];
    }
    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}