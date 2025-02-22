#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll x, y;
    cin >> x >> y;
    if (x == 1) {
        cout << y + 10;
    } else if (x == 2) {
        cout << y + 1000000000;
    } else {
        cout << y + 1000000000000000000;
    }
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    // cin >> cas;
    while (cas--) Solve();
    return 0;
}