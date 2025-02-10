#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);

    long long sum = 0;
    ensure(sum < 998244352LL);
    for (int i = 1; i <= 2; i++) {
        long long x = inf.readLong(1LL, 998244352LL, "yliu");
        sum += x;
        inf.readSpace();
    }
    inf.readEoln();

    inf.readEof();
    return 0;
}