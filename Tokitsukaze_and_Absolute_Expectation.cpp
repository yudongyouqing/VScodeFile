#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pan(char a[][4]) {
    ll flag = 0;
    for (int i = 1; i <= 3; i++) {
        if (a[i][1] == 'X' && a[i][2] == 'X' && a[i][3] == 'X') flag = 1;
        if (a[1][i] == 'X' && a[2][i] == 'X' && a[3][i] == 'X') flag = 1;
    }
    if ((a[1][1] == 'X' && a[2][2] == 'X' && a[3][3] == 'X') ||
        (a[1][3] == 'X' && a[2][2] == 'X' && a[3][1] == 'X'))
        flag = 1;
    return flag;
}

void Solve(void) {
    ll res = 0;
    char ve[4][4];
    for (ll i = 1; i <= 3; i++) {
        for (ll j = 1; j <= 3; j++) {
            cin >> ve[i][j];
            if (ve[i][j] == 'X') res++;
        }
    }
    if (res == 0)
        cout << "Yes" << '\n';
    else if (res == 1)
        cout << "Yes" << '\n';
    else if (res == 2)
        cout << "Yes" << '\n';
    else if (res == 4) {
        ll u, v;
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 3; j++) {
                if (ve[i][j] == 'G') {
                    ve[i][j] = 'X';
                }
            }
        }
        ll flag = 0;
        for (int i = 1; i <= 3; i++) {
            if (ve[i][1] == 'X' && ve[i][2] == 'X' && ve[i][3] == 'X') flag = 1;
            if (ve[1][i] == 'X' && ve[2][i] == 'X' && ve[3][i] == 'X') flag = 1;
        }
        if ((ve[1][1] == 'X' && ve[2][2] == 'X' && ve[3][3] == 'X') ||
            (ve[1][3] == 'X' && ve[2][2] == 'X' && ve[3][1] == 'X'))
            flag = 1;
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    } else if (res == 3) {
        ll dx[4], dy[4];
        ll ds = 1;
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 3; j++) {
                if (ve[i][j] == 'G') {
                    dx[ds] = i;
                    dy[ds] = j;
                    ds++;
                }
            }
        }
        ve[dx[1]][dy[1]] = 'X';
        ve[dx[2]][dy[2]] = 'X';
        ll f1 = 0, f2 = 0, f3 = 0;
        f1 = pan(ve);
        ve[dx[1]][dy[1]] = 'G';
        ve[dx[2]][dy[2]] = 'G';
        ve[dx[1]][dy[1]] = 'X';
        ve[dx[3]][dy[3]] = 'X';
        f2 = pan(ve);
        ve[dx[1]][dy[1]] = 'G';
        ve[dx[3]][dy[3]] = 'G';
        ve[dx[2]][dy[2]] = 'X';
        ve[dx[3]][dy[3]] = 'X';
        f3 = pan(ve);
        if (f1 || f2 || f3)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    cout << 1;
}

int main(void) {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int cas = 1;
    cin >> cas;
    while (cas--) Solve();
    return 0;
}
