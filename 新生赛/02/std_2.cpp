#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
using ull = unsigned long long;
#define ff(x) fixed << setprecision(x)
constexpr int inf = 0x3f3f3f3f;
constexpr ll INF = 0x3f3f3f3f3f3f3f3fLL;
constexpr db EPS = 1.0e-9;
constexpr ll MOD = 998244353LL;
constexpr ll MOd = 1e9 + 7;
constexpr ll SZ = 1e6;
constexpr ll MAXN5 = 2e5 + 5;
constexpr ll MAXN6 = 2e6 + 5;
constexpr double pi = acos(-1.0);
ll n, m;
vector<vector<long long>> chen(const vector<vector<long long>> &A,
                               const vector<vector<long long>> &B) {
    ll n1 = A.size();
    vector<vector<long long>> C(n1, vector<long long>(n1, 0));
    for (int k = 0; k < n1; k++) {
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n1; j++) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOd;
            }
        }
    }
    return C;
}
vector<vector<long long>> matixpow(vector<vector<long long>> A, long long p) {
    ll n2 = A.size();
    vector<vector<long long>> result(n2, vector<long long>(n2, 0));
    for (int i = 0; i < n2; i++) {
        result[i][i] = 1;
    }
    while (p) {
        if (p & 1) {
            result = chen(A, result);
        }
        A = chen(A, A);
        p >>= 1;
    }
    return result;
}
void Solve(void) {
    n = 2;
    m = n;
    vector<vector<ll>> v(n, vector<ll>(m));
    v = {{0, 1}, {1, 1}};
    ll T;
    cin >> T;
    while (T--) {
        ll p;
        cin >> p;
     
        vector<vector<ll>> ans = matixpow(v, p + 10);
        cout << ans[1][1] << '\n';
    }
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // 	freopen("mine.in", "r", stdin);
    // 	freopen("mine.out", "w", stdout);

    int cas = 1;
    // cin >> cas;
    while (cas--)
        Solve();
    return 0;
}