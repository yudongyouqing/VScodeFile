#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n, m;
    cin >> n >> m;

    ll su = n + n + 1;
    if (su == m) {
        cout << "YES\n";
    } else if (su > m) {
        if ((su - m) % 4 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        if ((m - su) % 4 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}