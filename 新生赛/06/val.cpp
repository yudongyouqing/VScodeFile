#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    
    long long t = inf.readLong(1LL, 10000LL, "yiliu");
    inf.readEoln();
    
    for (int i = 0; i < t; i++) {
        long long n = inf.readLong(2LL, 1000000000LL, "nn");
        inf.readSpace();
        long long y = inf.readLong(2LL, 1000000000LL, "yliu");
        inf.readEoln();
    }
    
    inf.readEof();
    return 0;
}
