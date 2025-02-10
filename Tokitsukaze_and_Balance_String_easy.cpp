#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
void Solve(void) {
    ll n, i;
    string s;
    ll ans = 0;
    cin >> n;
    cin >> s;
    vector<string> q;
    auto calc = [&](auto self, string& s, string now, ll itt,
                    vector<string>& res) -> void {
        if (itt == s.size()) {
            res.push_back(now);
            return;
        }
        if (s[itt] == '?') {
            self(self, s, now + '0', itt + 1, res);
            self(self, s, now + '1', itt + 1, res);
        } else {
            self(self, s, now + s[itt], itt + 1, res);
        }
    };

    calc(calc, s, "", 0, q);
    auto pus = [&](string s) {
        ll one = 0, eno = 0;
        for (ll i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0' && s[i + 1] == '1') {
                one++;
            }
            if (s[i] == '1' && s[i + 1] == '0') {
                eno++;
            }
        }
        return one == eno;
    };

    for (auto it : q) {
        for (ll j = 0; j < it.size(); j++) {
            string xx;
            if (it[j] == '0') {
                xx =
                    it.substr(0, j) + '1' + it.substr(j + 1, it.size() - j - 1);

            } else {
                xx =
                    it.substr(0, j) + '0' + it.substr(j + 1, it.size() - j - 1);
            }
            if (pus(xx)) {
                ans = (ans + 1) % mod;
            }
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
