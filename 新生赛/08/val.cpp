#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    long long sum = 0;
    long long t = inf.readLong(1LL, 200000LL, "t");
    inf.readEoln();
    for (int i = 1; i <= t; i++) {
        long long x = inf.readLong(-2000000000000000LL, 2000000000000000LL, "x");
        inf.readSpace();
        long long y = inf.readLong(-2000000000000000LL, 2000000000000000LL, "y");
        inf.readSpace();
        long long z = inf.readLong(-20000000000LL, 20000000000LL, "z");
        inf.readSpace();
        long long z_a = inf.readLong(-20000000000LL, 20000000000LL, "z_a");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}