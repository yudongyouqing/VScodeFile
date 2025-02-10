#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    int n = atoi(argv[1]);
    long long t = rnd.next(1LL, 200000LL);
    cout << t << endl;
    for (int i = 1; i <= t; ++i) {
        long long ai = rnd.next(-2000000000000000LL, 2000000000000000LL);
        long long bi = rnd.next(-2000000000000000LL, 2000000000000000LL);
        long long ci = rnd.next(-20000000000LL, 20000000000LL);
        long long ci_a = rnd.next(-20000000000LL, 20000000000LL);
        cout << ai << ' ';
        cout << bi << ' ';
        cout << ci << ' ';
        cout << ci_a;
        cout << endl;
    }
    return 0;
}