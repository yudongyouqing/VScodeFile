#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
#define for0(I, L, R) for (ll I = L; I <= (R); ++I)
#define for1(I, R, L) for (ll I = R; I >= (L); --I)
#define ff(x) fixed << setprecision(x)
#define endl '\n'
#define vel vector<long long>
#define ves vector<string>
#define asn ans
constexpr int inf = 0x3f3f3f3f;
constexpr ll INF = 0x3f3f3f3f3f3f3f3fLL;
constexpr db EPS = 1.0e-9;
constexpr ll MOD = 998244353LL;
constexpr ll SZ = 1e6;
constexpr ll MAXN5 = 2e5 + 5;
constexpr ll MAXN6 = 2e6 + 5;
// 如果傻逼般的WA了, 请你先检查
// 1.数组清空了吗 ?
// 2.要开/开了long long 吗
// 3.数组开的够大了吗 ?
// 4.变量名都写对了吗?
// 5.题目意思理解了吗？
ll n, m, q, p;
ll h, k;
vel v;
void Solve(void)
{
    v.clear();
    ll ans = 0;
    cin >> n >> k;
    ll yi = 1, er = n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        ans += x;
    }
    ll zuo = k / 2 + k % 2;
    ll you = k / 2;
    if (k >= ans)
    {
        cout << n << endl;
        return;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (zuo >= v[i])
            {
                zuo -= v[i];
                yi++;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (you >= v[i])
            {
                you -= v[i];
                er--;
            }
            else
            {
                break;
            }
        }
    }
    cout << n-(er - yi+1) << endl;
}
int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // #if defined(LOCAL) and not defined(ONLINE_JUDGE)
    // 	freopen("mine.in", "r", stdin);
    // 	freopen("mine.out", "w", stdout);
    // #endif

    int cas = 1;
    cin >> cas;
    while (cas--)
        Solve();
    return 0;
}