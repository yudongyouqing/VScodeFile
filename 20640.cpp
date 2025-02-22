#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void) {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = (s[0] == '1');

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1]) {
            ans++;
        }
    }
    cout << ans << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}