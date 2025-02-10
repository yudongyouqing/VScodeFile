#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(10);
    if(a<0)
        a=-a,b=-b,c=-c;
    if(a==0&&b==0&&c==0)
        cout<<-1;
    else if(a==0&&b==0)
        cout<<0;
    else
    {
        if(a==0)
        {
            cout<<1<<'\n';
            cout<<-c/1.0/b;
        }
        else
        {
            ll x=b*b-4*a*c;
            if(x<0)
                cout<<0;
            else if(x==0)
                cout<<1<<'\n'<<-b/2.0/a;
            else
                cout<<2<<'\n'<<(-b-sqrt(x))/2.0/a<<'\n'<<(-b+sqrt(x))/2.0/a;
        }
    }
}