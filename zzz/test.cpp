#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;

ll m, n;
ll a[1000005] = {0};
char ch;
int Exgcd(int a, int b, int &x, int &y) {
    if (!b) {
        x = 1;
        y = 0;
        return a;
    }
    int d = Exgcd(b, a % b, x, y);
    int t = x;
    x = y;
    y = t - (a / b) * y;
    return d;
}
void print(__int128 num)

{
    if (num > 9) print(num / 10);
    putchar(num % 10 + '0');
}

void Solve(void) {
    string s;
    while (getline(cin, s)) {
        int shuzi = 0;
        int zifu = 0;
        char maxc = 'A';
        double sum = 0;
        double geshu = 0;
        string ss = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                ss += s[i];
                shuzi++;
                geshu += 1;
                sum += s[i] - '0';
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                ss += towupper(s[i]);
                if (maxc < towupper(s[i])) {
                    maxc = towupper(s[i]);
                }
                zifu++;
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                ss += towlower(s[i]);
                if (maxc < towlower(s[i])) {
                    maxc = towlower(s[i]);
                }
                zifu++;
            } else if (s[i] == ' ') {
                ss += "NITACM";
            } else {
                ss += s[i];
                if (maxc < (s[i])) {
                    maxc = (s[i]);
                }
            }
        }
        cout << ss << '\n';
        if (shuzi > zifu) {
            cout << fixed << setprecision(2) << sum / geshu << '\n';
        } else if (shuzi < zifu) {
            cout << maxc << '\n';
        } else {
            cout << "214216" << '\n';
        }
    }
}
int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;

    while (cas--) Solve();
    return 0;
}