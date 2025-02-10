#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    int n = atoi(argv[1]);
    long long x=0;
    for (int i = 1; i <= 2; ++i) {
        long long ai = rnd.next(1LL,998244352LL);
        cout << ai << endl;
        x+=ai;
    }
    ensuref(x < 998244353LL, "Sum exceeds limit: %lld", x);
    return 0;
}