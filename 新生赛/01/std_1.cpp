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
constexpr ll SZ = 1e6;
constexpr ll MAXN5 = 2e5 + 5;
constexpr ll MAXN6 = 2e6 + 5;
constexpr double pi = acos(-1.0);
ll n, m;

void Solve(void){
    cin>>n;
    n=abs(n);
    ll ans=0;
    while(n>0){
        if(n==1){
            ans++;
            break;
        }
        if(n&1){
            ans+=2;
        }else{
            ans++;
        }
        n=n/2;
    }
    cout<<ans<<'\n';
}
int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // 	freopen("mine.in", "r", stdin);
    // 	freopen("mine.out", "w", stdout);

    int cas = 1;
    cin >> cas;
    while (cas--)
        Solve();
    return 0;
}