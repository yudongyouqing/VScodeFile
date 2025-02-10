#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    
    long long t = inf.readLong(1LL, 100LL, "yiliu");
    inf.readEoln();
    
    for (int i = 0; i < t; i++) {
        long long n = inf.readLong(2LL, 500LL, "nn");
        inf.readEoln();
        
        for (int j = 0; j < n - 1; j++) { // 改为从0开始
            long long x = inf.readLong(1LL, 1000000000LL, "yliu");
            inf.readSpace();
        }
        
        long long y = inf.readLong(1LL, 1000000000LL, "yliu");
        inf.readEoln();
    }
    
    inf.readEof();
    return 0;
}
