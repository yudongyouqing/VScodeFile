#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    int n = atoi(argv[1]);
    long long t = rnd.next(1LL, 10000LL);
    cout << t << endl;

    long long x = 200000LL;
    
    for (int i = 1; i <= t; ++i) {
        long long ai = rnd.next(1LL, max(2LL,x));
        x-=ai;
        cout << ai << ' ';
        long long bi = rnd.next(1LL, 1000000000000000LL);
        cout << bi << endl;
        for (int j = 1; j < ai; j++) {
            long long ci = rnd.next(1LL, 1000000000LL);
            cout << ci << ' ';
        }
        long long ci_a = rnd.next(1LL, 1000000000LL);
        cout<<ci_a;
        cout << endl;
    }
    return 0;
}