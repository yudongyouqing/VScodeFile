#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    long long sum = 0;
    
    ensuref(sum < 300000LL, "Sum exceeds limit: %lld", sum);
    long long t = inf.readLong(1LL, 10000LL, "t");
    inf.readEoln();
    for (int i = 1; i <= t; i++) {
        long long x = inf.readLong(1LL, 200000LL, "x");
        sum += x;
        inf.readSpace();
        long long y = inf.readLong(1LL, 1000000000000000LL, "y");
        inf.readEoln();
        for (int j = 1; j < x; j++) {
            long long z = inf.readLong(1LL, 1000000000LL, "z");
            inf.readSpace();
        }
        long long z_a = inf.readLong(1LL, 1000000000LL, "z_a");
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}