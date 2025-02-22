#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> p(n), a(n);
        for (int i = 0; i < n; ++i)
            cin >> p[i];
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        map<int, vector<int>> cols;
        for (int i = 0; i < n; ++i) {
            cols[a[i]].push_back(p[i]);
        }

        bool valid = true;
        for (auto& [c, vec] : cols) {
            sort(vec.rbegin(), vec.rend());
            for (int x : vec) {
                if (x < c) { // 修改为检查元素是否小于c
                    valid = false;
                    break;
                }
            }
            if (!valid) break;
        }

        if (!valid) {
            cout << 0 << '\n';
            continue;
        }

        vector<LL> fact(n + 1);
        fact[0] = 1;
        for (int i = 1; i <= n; ++i)
            fact[i] = fact[i - 1] * i % MOD;

        LL ans = 1;
        for (auto& [c, vec] : cols) {
            int cnt = 1;
            int same = 1;
            for (int i = 1; i < vec.size(); ++i) {
                if (vec[i] == vec[i - 1]) {
                    same++;
                } else {
                    cnt = cnt * fact[same] % MOD;
                    same = 1;
                }
            }
            cnt = cnt * fact[same] % MOD;
            ans = ans * cnt % MOD;
        }

        cout << ans << '\n';
    }

    return 0;
}
