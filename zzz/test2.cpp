#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ww(ll x, ll y, ll z) {
    if (z == 1) {
        return x;
    }
    if (z == 2) {
        return y;
    }
    return ww(x, y, z - 1) + ww(x, y, z - 2);
}
void Solve(void) {
    ll x = 3, y = 0;
    ll len = 4;
    cout << ww(x, y, len) << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    // cin >> cas;
    while (cas--) Solve();
    return 0;
}