#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    long long n = inf.readLong(1LL, 10LL, "yiliu"); 
    inf.readEoln();
    for (int i = 1; i <= n; i++) {
        long long x = inf.readLong(1LL, 1000000000000LL, "yliu");
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}
