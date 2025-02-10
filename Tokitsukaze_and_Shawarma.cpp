#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;

    cout << max({x * a, y * b, c * z}) << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}