#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);
    int n = atoi(argv[1]);
    long long t = rnd.next(1LL, 500000LL);
    cout << t << endl;
    for (int i = 1; i < t; ++i) {
        long long ai = rnd.next(1LL, 1000000000LL);
        cout << ai << ' ';
    }
    long long ci_a = rnd.next(1LL, 1000000000LL);
    cout << ci_a;
    cout << endl;
    return 0;
}