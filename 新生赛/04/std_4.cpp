#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD=998244353;
long long binpow(long long a, long long b, long long m) {
  a %= m;
  long long res = 1;
  while (b > 0) {
    if (b & 1) res = res * a % m;
    a = a * a % m;
    b >>= 1;
  }
  return res;
}
int main(void)
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a,b;
    cin>>a>>b;
    ll ans1=a*binpow(a+b,MOD-2,MOD)%MOD,ans2=b*binpow(a+b,MOD-2,MOD)%MOD;
    cout<<ans1<<' '<<ans2;
}