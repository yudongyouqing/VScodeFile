#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
#include <stack>
#include <iterator>
#include <cmath>
#include <bitset>
#include <set> 
typedef long long ll;
using namespace std;
const ll INF = 1e18;
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    const double pi= std::acos(-1.0);   
    ll n,i,j,t;
    cin>>t;
    while (t--){
        cin>>n;
        ll ar[n+1];
        ll cn=0;
        ll f=1;
        for (i=1;i<=n;i++){
            cin>>ar[i];
            if (i!=1){
                if (ar[i]<ar[i-1]){
                    f=0;
                }
            }
        }
        if (f==0){
            cout<<0<<'\n';   
        }
        else{
            for (i=1;i<=n;i++){
                if (i!=1){
                    if (i==2){
                        if (ar[i-1]<=ar[i]){
                            cn=(ar[i]-ar[i-1])/2+1;
                        }
                    }
                    else{
                        if ((ar[i]-ar[i-1])/2+1<cn){
                            cn=(ar[i]-ar[i-1])/2+1;
                        }
                    }
                }
            }
            cout<<cn<<'\n';    
        }
    }
    return 0;
}