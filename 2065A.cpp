#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Solve(void){
    string s;
    cin>>s;
    if(s.back()=='i'){
        s.pop_back();
        s+="us";
    }else{
        s.pop_back();
        s.pop_back();
        s+="i";
    }
    cout<<s<<'\n';
    
}
int main(void)
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
     cin >> cas;
    while (cas--)
        Solve();
    return 0;
}