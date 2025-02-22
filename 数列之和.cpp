#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void print(__int128 num) {
    if (num == 0) {
        cout << '0';
        return;
    }
    if (num < 0) {
        cout << '-';
        num = -num;
    }
    char s[100];
    int i = 0;
    while (num > 0) {
        s[i++] = num % 10 + '0';
        num /= 10;
    }
    while (i > 0) {
        cout << s[--i];
    }
}
void Solve(void) {
    ll n;
    cin >> n;

    __int128_t a = 0;
    a = 2 * n;
    __int128_t cnt = 4;
    while (cnt <= a) {
        a += 2;
        cnt *= 2;
    }
    print(a);
    cout << '\n';
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}