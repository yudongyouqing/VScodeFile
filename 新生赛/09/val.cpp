#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    long long t = inf.readLong(1LL, 500000LL, "t");
    inf.readEoln();
    for (int i = 1; i < t; i++) {
        long long z = inf.readLong(1LL, 1000000000LL, "z");
        inf.readSpace();
    }
    long long y = inf.readLong(1LL, 1000000000LL, "y");
    inf.readEoln();
    inf.readEof();
    return 0;
}